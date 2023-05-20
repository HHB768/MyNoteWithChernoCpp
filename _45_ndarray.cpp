//#include <iostream>
//
//int main()
//{
//	int* array = new int[50];
//	int** a2d = new int* [50];
//	int*** a3d = new int** [50];
//
//	for (int i = 0; i < 50; i++)
//	{
//		a3d[i] = new int* [50];
//		for (int j = 0; j < 50; j++)
//		{
//			/*int** ptr = a3d[i];
//			ptr[j] = new int[50];*/
//			//eq2
//			a3d[i][j] = new int[50];
//		}
//	}
//
//	a3d[0][0][0] = 0;
//
//	//delete[] a3d; //wrong
//	// you should write for loop to delete[] all corresponding "new"
//
//
//	// ndarray may cause cache miss
//	// the speed is a lot slower than 1darray
//	// you can use 1darray to organize ndarray like this:
//	int* array = new int[5 * 5];
//	for (int y = 0; y < 5; y++)
//	{
//		for (int x = 0; x < 5; x++)
//		{
//			array[x + y * 5] = 2;
//		}
//	}
//}