#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1901668732;
int var_5 = 1179880625;
long long int var_6 = 5190390273325595758LL;
int var_7 = 1238761621;
int var_9 = 1893235487;
int var_10 = 257948910;
long long int var_13 = 4201931884797830105LL;
short var_14 = (short)-16672;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)60923;
_Bool var_18 = (_Bool)1;
int var_19 = -1416667653;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
