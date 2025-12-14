#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61805;
signed char var_4 = (signed char)105;
short var_5 = (short)-30058;
signed char var_8 = (signed char)-68;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3157006911U;
unsigned char var_14 = (unsigned char)166;
int zero = 0;
unsigned char var_15 = (unsigned char)104;
unsigned char var_16 = (unsigned char)92;
short var_17 = (short)-2091;
unsigned int var_18 = 3812256299U;
int var_19 = 1467653712;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
