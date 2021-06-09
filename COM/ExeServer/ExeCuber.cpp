// ExeCuber.cpp : Implementation of CExeCuber

#include "pch.h"
#include "ExeCuber.h"
#include <string>
#include <thread>
// CExeCuber



STDMETHODIMP CExeCuber::CubeMe(DOUBLE num, DOUBLE* numOut)
{
	// TODO: Add your implementation code here
	double dAns = num * num * num;
	*numOut = dAns;
	return S_OK;
}
