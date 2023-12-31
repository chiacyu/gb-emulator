#include <cpu.h>


static void cpu_init(cpu *cpu_ctx) {
    //initialize cpu state
    cpu_ctx->registers.pc = 0x100;
    cpu_ctx->registers.a = 0x01;
}

static void cpu_running(cpu *cpu_ctx) {
    /*To Do*/
    if (!cpu_ctx->running) {
        
    }
}

