// Circle.cpp : Implementation of CCircle

#include "pch.h"
#include "Circle.h"


// CCircle



STDMETHODIMP CCircle::get_Radius(DOUBLE* pVal)
{
	*pVal = m_dRadius;

	return S_OK;
}


STDMETHODIMP CCircle::put_Radius(DOUBLE newVal)
{
	m_dRadius = newVal;

	return S_OK;
}


STDMETHODIMP CCircle::GetArea(DOUBLE* Area)
{
	double dArea = (22 * m_dRadius * m_dRadius) / 7;
	*Area = dArea;
	return S_OK;
}
