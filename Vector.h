#pragma once

template<typename Vector>
class VectorIterator
{
public:
	using ValueType = typename Vector::ValueType;
	//using PointerType = ValueType*;
	typedef ValueType* PointerType;
	using ReferenceType = ValueType&;
public:
	VectorIterator(PointerType ptr)
		: m_ptr(ptr) {}
	VectorIterator& operator++()
	{
		m_ptr++;
		return *this;
	}

	VectorIterator operator++(int)
	{
		VectorIterator iterator = *this;
		++(*this);
		return iterator;
	}

	VectorIterator& operator--()
	{
		m_ptr--;
		return *this;
	}

	VectorIterator operator--(int)
	{
		VectorIterator iterator = *this;
		--(*this);
		return iterator;
	}
	
	ReferenceType operator[](int index)
	{
		return *(m_ptr + index);
	}

	ReferenceType operator->()
	{
		return m_ptr;
	}

	ReferenceType operator*()
	{
		return *m_ptr;
	}

	bool operator==(const VectorIterator& other) const
	{
		return m_ptr == other.m_ptr;
	}

	bool operator!=(const VectorIterator& other) const
	{
		return !(*this == other);
	}
private:
	PointerType m_ptr;
};


template<typename T>
class Vector
{
public:
	using ValueType = T;
	using Iterator = VectorIterator<Vector<T>>;
public:
	Vector()
	{
		realloc(2);
	}

	void push_back(const T& value)
	{
		if (m_size >= m_capacity)
		{
			realloc(m_capacity + m_capacity / 2);  // avooid frequent reallocation at each single push_back
		}
		
		m_data[m_size] = value;
		m_size++;
	}

	void push_back(T&& value)
	{
		if (m_size >= m_capacity)
		{
			realloc(m_capacity + m_capacity / 2);  // avooid frequent reallocation at each single push_back
		}

		m_data[m_size] = std::move(value);
		m_size++;
	}
	template<typename... Args>
	T& emplace_back(Args&&... args)
	{
		if (m_size >= m_capacity)
		{
			realloc(m_capacity + m_capacity / 2);  // avooid frequent reallocation at each single push_back
		}

		m_data[m_size] = T(std::forward<Args>(args)...);   // ... : unpack, T : constructor
		// weird way to place the data in the m_data directly
		//new(&m_data[m_size]) T(std::forward<Args>(args)...);
		return m_data[m_size++];
	}

	void pop_back()
	{
		if (m_size > 0)
		{
			m_size--;
			m_data[m_size].~T();
		}
	}

	void clear()
	{
		for (size_t i = 0; i < m_size; i++)
		{
			m_data[i].~T();
		}
		m_size = 0;
	}

	const T& operator[](size_t index) const
	{
		if (index >= m_size)
		{
			// assert
		}
		return m_data[index];
	}

	T& operator[](size_t index)
	{
		return m_data[index];
	}

	size_t size() const { return m_size; }

	Iterator begin()
	{
		return Iterator(m_data);
	}

	Iterator end()
	{
		return Iterator(m_data + m_size);
	}
private:
	void realloc(size_t new_capacity)
	{
		// 1. allocate a new block of memory
		// 2. copy/move existing elements to this new memory
		// 3. delete the old one

		T* new_block = new T[new_capacity];
		
		if (new_capacity < m_size)
			m_size = new_capacity;

		for (size_t i = 0; i < m_size; i++)
		{
			new_block[i] = std::move(m_data[i]);
		}
		delete[] m_data;
		m_data = new_block;
		m_capacity = new_capacity;
	}
private:
	T* m_data = nullptr;

	size_t m_size = 0;
	size_t m_capacity = 0;  // avoid frequent reallocation at each single push_back
};

// there is still a bug here, since we manually call the ~T(), it will delete m_data, however when the vector is destroyed, its destructor will destroy a memory that has been deleted.
// the bug has been fixed in vedio 92, but it is too difficult to be recorded here
