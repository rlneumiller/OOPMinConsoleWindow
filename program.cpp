#include "Window.h"

int main()
{
    std::cout << "Creating Window" << std::endl;
    Window* pWindow = new Window();
    bool bRunning = true;
    while (bRunning)
    {
        if (!pWindow->ProcessWindowMessages())
        {
            std::cout << "Closing window" << std::endl;
            bRunning = false;
        }
        Sleep(10); // Give the processor a break until we add some rendering code to keep it busy
    }

    delete pWindow;

    return 0;
}