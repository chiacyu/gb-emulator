#include <cstdint>


typedef struct {
    uint8_t a;      //Accumulator
    uint8_t b;
    uint8_t d;
    uint8_t h;
    uint8_t f;      //Flag
    uint8_t c;
    uint8_t e;
    uint8_t l;
    uint16_t sp;    //Stack pointer
    uint16_t pc;    //Program counter
} cpu_registers;

typedef struct {
    cpu_registers registers;
    bool running;
    bool halt;
    bool interrupt;
}cpu;

#define ZERO_FLAG(r)(((1 << 7)& f) >> 7);
#define N_FLAG(r)(((1 << 6)& f) >> 7);
#define HC_FLAG(r)(((1 << 5)& f) >> 7);
#define CARRY_FLAG(r)(((1 << 4)& f) >> 7);

static void cpu_init(cpu *cpu_ctx);
static void cpu_running(cpu *cpu_ctx);
static void cpu_stop(cpu *cpu_ctx);
static void cpu_fetch(cpu *cpu_ctx);
