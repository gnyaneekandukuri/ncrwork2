#define SIZE 100
#include<stdio.h>
#include<windows.h>

int _tmain(int argc,LPTSTR argv[]){

    HANDLE hfile;
   
    TCHAR buffer[SIZE];
    if(argc!=2){
        _tprintf(_T("Enter the file name \n"));
        getchar();
        return FALSE;
    }
    // Creating a file 
    hfile = CreateFileA(argv[1],
                        GENERIC_READ | GENERIC_WRITE,
                        0,
                        NULL,
                        OPEN_EXISTING,
                        FILE_ATTRIBUTE_NORMAL,
                        NULL
                        );
    if(hfile == INVALID_HANDLE_VALUE){

        _tprintf(_T("File cant be opened %d \n"),GetLastErroe());
        getchar();
        return FALSE;
    }        
    _tprintf(_T("File opened successfuly \n"));
    //writing into a file using file handle
     WCHAR *bufferInput = L"Thid is an imput text to the file";
    DWORD dwNoOfBytesToWrite =  wcslen(bufferlength);
    DWORD lpNumberOfBytesWritten =0;
    BOOL retValueWrite = WriteFile(
                                hfile,
                                bufferInput,
                                dwNoOfBytesToWrite,
                                &lpNumberOfBytesWritten,
                                NULL);
    if(retValueWrite == FALSE)
    {
     
     _tprintf(_T("Error in Writing into File %d \n" ),GetLastError());
        getchar();
        return FALSE;  

    }

   //Reading a file
    DWORD noOfBytes;
    ZeroMemory(buffer,SIZE);
    BOOL retValue = ReadFile(hfile,
                        buffer,
                        SIZE,
                        &noOfBytes,
                        NULL );
    if(retValue == 0){
        _tprintf(_T("Error in Reading File %d \n" ),GetLastError());
        getchar();
        return FALSE;

    }
    CloseHamdle(hfile);
    _tprintf(_T("text from file is %S \n"),buffer);
    getchar();


    return TRUE;
    
}