#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 7410372699683712067ULL;
signed char var_9 = (signed char)35;
short var_13 = (short)-14669;
unsigned short var_14 = (unsigned short)28510;
int var_15 = -528494661;
int var_16 = 1600522719;
int zero = 0;
long long int var_17 = 7971323106127173087LL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1832086774U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
