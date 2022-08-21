#pragma once

#include "Interface.hpp"
#include "IRuntimeModule.hpp"

namespace Engine {
    class IApplication : public IRuntimeModule {
    public:
        virtual int Initialize() = 0;

        virtual void Finalize() = 0;

        virtual void Tick() = 0;
        
        virtual bool isQuit() = 0;
    };
}