#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <sdkddkver.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <Windows.h>
#include <WinInet.h>
#pragma comment (lib, "Wininet.lib")

#define bool uint8_t
#define false 0
#define true 1

void PEHeaderReader(char* FileName, char* result);
void FileDownloader(char* exeName, char* url, char* pdbName);
