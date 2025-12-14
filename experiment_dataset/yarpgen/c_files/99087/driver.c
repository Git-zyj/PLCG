#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21076;
int var_2 = -2128260560;
unsigned char var_3 = (unsigned char)195;
int var_5 = -973214228;
unsigned int var_6 = 1152084154U;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_12 = -1798068400;
int zero = 0;
unsigned long long int var_14 = 16749969278470326347ULL;
int var_15 = 1602964346;
unsigned long long int var_16 = 18404130699901378904ULL;
unsigned long long int var_17 = 13464938326089731489ULL;
void init() {
}

void checksum() {
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
