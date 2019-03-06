#include<windows.h>
#include<stdio.h>
int main() {
	//LPWSTR * CommandLineToArgvW(
	//	LPCWSTR lpCmdLine,
	//	int     *pNumArgs
	//);

	LPWSTR *arglist;
	int nArgs;
	int i;
	arglist = CommandLineToArgvW(GetCommandLineW(), &nArgs);
	if (NULL == arglist) {
		wprintf(L"No commandline arguments");
	
	}
	else {
		for (int i = 0; i < nArgs; i++) {
			printf("%d : %ws \n", i, arglist[i]);
		}
	}
	getchar();
}