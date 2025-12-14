#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3284767239U;
unsigned short var_1 = (unsigned short)7645;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)40376;
_Bool var_6 = (_Bool)1;
unsigned int var_10 = 1906643152U;
short var_11 = (short)-28484;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-2;
unsigned int var_15 = 232154150U;
long long int var_16 = 8992494741561025207LL;
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
