#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)99;
unsigned char var_3 = (unsigned char)104;
unsigned int var_5 = 2101501144U;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_13 = (short)-12153;
long long int var_14 = -4937916105251551160LL;
short var_15 = (short)11193;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-23877;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
