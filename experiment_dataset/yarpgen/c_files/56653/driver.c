#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1036375992U;
signed char var_5 = (signed char)48;
long long int var_6 = -8545044367646579532LL;
long long int var_7 = -4656498546753406373LL;
unsigned short var_8 = (unsigned short)29366;
long long int var_9 = 4330944476769104979LL;
short var_10 = (short)-9502;
int zero = 0;
int var_13 = 291740540;
unsigned short var_14 = (unsigned short)6253;
unsigned short var_15 = (unsigned short)15048;
signed char var_16 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
