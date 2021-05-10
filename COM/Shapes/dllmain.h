// dllmain.h : Declaration of module class.

class CShapesModule : public ATL::CAtlDllModuleT< CShapesModule >
{
public :
	DECLARE_LIBID(LIBID_ShapesLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SHAPES, "{1fca7fab-d2a5-4b07-82fc-86a917d90e52}")
};

extern class CShapesModule _AtlModule;
