// ExeServer.cpp : Implementation of WinMain


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "ExeServer_i.h"
#include "xdlldata.h"


using namespace ATL;


class CExeServerModule : public ATL::CAtlExeModuleT< CExeServerModule >
{
public :
	DECLARE_LIBID(LIBID_ExeServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_EXESERVER, "{25b1e72e-da8e-4c40-a2c0-4b4981275188}")
};

CExeServerModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{

	return _AtlModule.WinMain(nShowCmd);
}

