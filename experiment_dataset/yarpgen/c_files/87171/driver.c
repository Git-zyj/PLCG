#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1467370552;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-51;
unsigned char var_9 = (unsigned char)124;
int zero = 0;
signed char var_13 = (signed char)-61;
unsigned char var_14 = (unsigned char)246;
unsigned short var_15 = (unsigned short)47660;
unsigned short var_16 = (unsigned short)23923;
_Bool var_17 = (_Bool)1;
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
