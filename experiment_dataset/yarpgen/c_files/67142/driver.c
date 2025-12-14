#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1454478409;
unsigned char var_2 = (unsigned char)252;
unsigned int var_6 = 591879206U;
unsigned long long int var_7 = 2560576004946670440ULL;
int var_8 = -776099400;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_13 = (short)-8757;
unsigned long long int var_14 = 86180370942653722ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)23060;
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
