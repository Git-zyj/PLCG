#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2096405278U;
signed char var_1 = (signed char)-127;
unsigned long long int var_3 = 17833485204548334746ULL;
signed char var_4 = (signed char)87;
int var_5 = 247122044;
short var_7 = (short)-29740;
unsigned long long int var_9 = 14830687089607245977ULL;
unsigned int var_13 = 600331115U;
unsigned int var_15 = 2647652905U;
unsigned short var_17 = (unsigned short)48535;
int zero = 0;
int var_18 = 1975869197;
unsigned short var_19 = (unsigned short)48739;
unsigned short var_20 = (unsigned short)10614;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
