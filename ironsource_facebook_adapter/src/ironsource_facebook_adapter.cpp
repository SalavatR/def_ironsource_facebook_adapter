#define LIB_NAME "IronsourceFacebookAdapter"
#define MODULE_NAME "ironsource_facebook_adapter"

#include <dmsdk/sdk.h>

static void LuaInit(lua_State* L){}

dmExtension::Result AppInitializeIronsourceFacebookAdapter(dmExtension::AppParams* params){return dmExtension::RESULT_OK;}
dmExtension::Result InitializeIronsourceFacebookAdapter(dmExtension::Params* params){LuaInit(params->m_L);return dmExtension::RESULT_OK;}
dmExtension::Result AppFinalizeIronsourceFacebookAdapter(dmExtension::AppParams* params){return dmExtension::RESULT_OK;}
dmExtension::Result FinalizeIronsourceFacebookAdapter(dmExtension::Params* params){return dmExtension::RESULT_OK;}
dmExtension::Result OnUpdateIronsourceFacebookAdapter(dmExtension::Params* params){return dmExtension::RESULT_OK;}
void OnEventIronsourceFacebookAdapter(dmExtension::Params* params, const dmExtension::Event* event){}

DM_DECLARE_EXTENSION(IronsourceFacebookAdapter,
LIB_NAME,
AppInitializeIronsourceFacebookAdapter,
AppFinalizeIronsourceFacebookAdapter,
InitializeIronsourceFacebookAdapter,
OnUpdateIronsourceFacebookAdapter,
OnEventIronsourceFacebookAdapter,
FinalizeIronsourceFacebookAdapter)