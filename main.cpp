#include <iostream>
#include "ansi_csi_sgr.h"

int main() {
    std::cout << ANSI_SGR_FOREGROUND_RED "Hello, World!\n" ANSI_SGR_RESET;
    return 0;
}