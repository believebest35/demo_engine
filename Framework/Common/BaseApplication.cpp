#include "BaseApplication.hpp"

// 初始化所有子模块
int Engine::BaseApplication::Initialize() {
    m_bQuit = false;
    return 0;
}

// 结束所有子模块的运行并清理环境
void Engine::BaseApplication::Finalize() {

}

// One cycle of the main loop
void Engine::BaseApplication::Tick() {

}


// 查询应用程序是否被通知退出
bool Engine::BaseApplication::isQuit() {
    return m_bQuit;
}