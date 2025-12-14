#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2078072957U;
int var_3 = 375637113;
unsigned int var_5 = 485153170U;
int var_7 = -2127797347;
signed char var_9 = (signed char)-45;
int var_10 = 226264056;
long long int var_11 = -1664030582187596727LL;
unsigned short var_12 = (unsigned short)24718;
int zero = 0;
unsigned short var_13 = (unsigned short)41527;
unsigned short var_14 = (unsigned short)14627;
int var_15 = 1292789530;
void init() {
}

void checksum() {
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
