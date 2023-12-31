#include <cpu.h>

typedef struct {
    /* data */
    uint8_t a;
}hw_register;

typedef struct {
    cpu cpu_core;
    hw_register registers;
    
} gameboy;


static void gameboy_start();
