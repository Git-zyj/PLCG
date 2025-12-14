#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16011346434922039729ULL;
signed char var_5 = (signed char)-12;
int zero = 0;
long long int var_12 = 4690652489550212142LL;
unsigned long long int var_13 = 15463960252179997794ULL;
short var_14 = (short)30854;
long long int var_15 = -54363777407434482LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
