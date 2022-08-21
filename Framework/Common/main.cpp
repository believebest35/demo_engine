#include <stdio.h>
#include "../Interface/IApplication.hpp"

using namespace Engine;

namespace Engine {
    extern IApplication *g_pApp;
}

int main() {
    int status = g_pApp->Initialize();
    if (status != 0) {
        printf("App initialize failed and will exit now.");
        return status;
    }

    while (!g_pApp->isQuit()) {
        g_pApp->Tick();
    }
    
    g_pApp->Finalize();

    return 0;
}