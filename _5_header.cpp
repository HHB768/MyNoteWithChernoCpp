// in header "log.h"

#pragma once  // protect the header to avoid redefinition error
              // because #include .h may be included by its children

// another way:
#ifndef _LOG_H
#define _LOG_H

void logr(const char* message);

#endif


// <> is only used in the include path of compiler  
// C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.33.31629\include
// and "" can be use everywhere, so
#include "iostream"
// iostream has no .h extension, C++ standard libraries have no .h while C standard libs have.
