// ExeClient.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..\ExeServer\ExeServer_i.h"
#include "..\ExeServer\ExeServer_i.c"
#include <atlcomcli.h>

int main()
{
	CoInitializeEx(NULL, COINIT::COINIT_APARTMENTTHREADED);
	CComPtr<IExeCuber> pCuber;
	double num1 = 3, num2 = 0;
	HRESULT hr = CoCreateInstance(CLSID_ExeCuber, NULL, CLSCTX_LOCAL_SERVER, 
		IID_IExeCuber, (LPVOID*)&pCuber);
	if (SUCCEEDED(hr))
	{
		pCuber->CubeMe(num1, &num2);
		std::cout << num1 << " cubed is : " << num2 << std::endl;
	}
	CoUninitialize();
	return 0;
}
