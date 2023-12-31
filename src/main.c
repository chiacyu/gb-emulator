#include<stdio.h>
#include "gameboy.h"

static void banner() {
#define ENDL "\n"
    printf(
        "                _n_________________" ENDL
        "                |_|_______________|_|" ENDL
        "                |  ,-------------.  |" ENDL
        "                | |  .---------.  | |" ENDL
        "                | |  |         |  | |" ENDL
        "                | |  |         |  | |" ENDL
        "                | |  |         |  | |" ENDL
        "                | |  |         |  | |" ENDL
        "                | |  `---------'  | |" ENDL
        "                | `---------------' |" ENDL
        "                |   _ GAME BOY      |" ENDL
        "   Up           | _| |_         ,-. | ----> Z" ENDL
        "Left/Right <--- ||_ O _|   ,-. \"._,\"|" ENDL
        "  Down          |  |_|    \"._,\"   A | ----> X" ENDL
        "                |    _  _    B      |" ENDL
        "                |   // //           |" ENDL
        "                |  // //    \\\\\\\\\\\\  | ----> Enter/BackSpace" ENDL
        "                |  `  `      \\\\\\\\\\\\ ," ENDL
        "                |________...______,\"" ENDL);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        
    }
    banner();
    
    printf("The value");
}