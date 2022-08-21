#pragma once

#include "../Interface/IApplication.hpp"

namespace Engine {
    class BaseApplication : public IApplication {
    public:
        virtual int Initialize();

        virtual void Finalize();

        virtual void Tick();

        virtual bool isQuit();
    
    protected:
        bool m_bQuit;
    };
}
