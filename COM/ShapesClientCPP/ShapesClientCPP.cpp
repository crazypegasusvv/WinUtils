// ShapesClientCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <objbase.h>
#include <atlcomcli.h>
#include "..\Shapes\Shapes_i.h"
#include "..\Shapes\Shapes_i.c"

int main()
{
	CoInitializeEx(nullptr, COINIT::COINIT_MULTITHREADED);
	CComPtr<ICircle> pCircle;
	HRESULT hr = CoCreateInstance(CLSID_Circle, nullptr, CLSCTX_INPROC_SERVER, IID_ICircle, (LPVOID*)&pCircle);
	if (SUCCEEDED(hr))
	{
		pCircle->put_Radius(7);
		double dArea;
		pCircle->GetArea(&dArea);
		std::cout << dArea << std::endl;
		getchar();
	}
	CoUninitialize();
}
