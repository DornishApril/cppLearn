#include <windows.h>
#include <malloc.h>
#include <stdio.h>
#include <stdint.h>
#include <iostream>

using namespace std;

static uint64_t GetAvailableStackSpace() {
    volatile uint8_t var;
    MEMORY_BASIC_INFORMATION mbi;

    auto virtualQuerySuccess = VirtualQuery((LPCVOID)&var, &mbi, sizeof(mbi));

    if (!virtualQuerySuccess) {
        return 0;
    }

    return (uint64_t)&var - (uint64_t)mbi.AllocationBase;
}

int main() {
    
    cout << "Available stack memory = " << GetAvailableStackSpace()<< " bytes\n\n\n";
    

    return 0;
}
