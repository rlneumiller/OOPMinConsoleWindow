#pragma once

#include <Windows.h>
#include <iostream>
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class Window
{
public:
    Window();

    // Tell the compiler not to create a default copy constructor because this Window class
    // is meant to be unique and it doesn’t make sense to have a copy.
    Window(const Window&) = delete;
    ~Window();

    bool ProcessWindowMessages();

private:
    HINSTANCE m_hInstance;
    HWND m_hWnd = {};
    const wchar_t* CLASS_NAME = L"Rachaels Window Class";
protected:
};

