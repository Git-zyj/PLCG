#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6914538345250197519LL;
signed char var_4 = (signed char)99;
short var_6 = (short)-20861;
signed char var_8 = (signed char)73;
unsigned short var_10 = (unsigned short)40704;
int var_14 = 316921009;
unsigned int var_15 = 3122183770U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 8101469U;
signed char var_18 = (signed char)75;
unsigned short var_19 = (unsigned short)53950;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
