#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <winuser.h>

using namespace std;

int DisplayResourceNAMessageBox()
{
    int msgboxID = MessageBox(
        NULL,
        (LPCWSTR)L"Resource not available\nDo you want to try again?",
        (LPCWSTR)L"Account Details",
        MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
    );

    switch (msgboxID)
    {
    case IDCANCEL:
        // TODO: add code
        break;
    case IDTRYAGAIN:
        // TODO: add code
        break;
    case IDCONTINUE:
        // TODO: add code
        break;
    }

    return msgboxID;
}

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    
    for (const string& word : msg)
    {
        cout << word << "\t";
        dajdhgjdfhgdfjghd
        
    }
    cout << endl;
    
}