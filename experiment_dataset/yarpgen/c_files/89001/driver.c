#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4293076132U;
unsigned char var_1 = (unsigned char)172;
unsigned int var_2 = 1629390802U;
short var_3 = (short)23639;
unsigned int var_5 = 3933381898U;
unsigned short var_8 = (unsigned short)36537;
int var_9 = -1015200089;
unsigned short var_10 = (unsigned short)10619;
signed char var_11 = (signed char)-119;
int var_12 = -27187128;
int zero = 0;
short var_13 = (short)-19587;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)169;
int var_16 = 2023505064;
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
