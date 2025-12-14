#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6822763144683778313ULL;
short var_3 = (short)-23548;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned short var_13 = (unsigned short)1922;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)54802;
int zero = 0;
unsigned int var_20 = 3221526313U;
short var_21 = (short)-5069;
unsigned long long int var_22 = 9247553485391364018ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
