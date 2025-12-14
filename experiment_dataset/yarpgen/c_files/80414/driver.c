#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 708664261140634160LL;
unsigned int var_6 = 153052903U;
long long int var_11 = -6940526133267600514LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_19 = 357090601;
unsigned short var_20 = (unsigned short)51782;
short var_21 = (short)-17963;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
