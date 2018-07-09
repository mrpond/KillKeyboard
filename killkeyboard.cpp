#include <windows.h>
#include <ShellApi.h>
#pragma comment(lib,"shell32.lib")

int main()
{
	ShellExecute(NULL, NULL, TEXT("taskkill.exe"), TEXT("/F /IM WindowsInternal.ComposableShell.Experiences.TextInput.InputApp.exe"), NULL, SW_HIDE);
    return 0;
}
