#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60986;
unsigned short var_4 = (unsigned short)55923;
unsigned short var_6 = (unsigned short)20938;
unsigned int var_7 = 1478345697U;
unsigned short var_8 = (unsigned short)15242;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-1990;
int zero = 0;
unsigned short var_13 = (unsigned short)11243;
unsigned int var_14 = 1507164272U;
signed char var_15 = (signed char)-82;
_Bool var_16 = (_Bool)1;
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
