#include "ScriptManager.h"


void ScriptManager::init()
{
	//��ʼ��lua����
	m_luaEngine = CCLuaEngine::defaultEngine();
	CCScriptEngineManager::sharedManager()->setScriptEngine(m_luaEngine);
}
