#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35535;
int var_8 = 1180916440;
unsigned long long int var_14 = 2004118993496766250ULL;
unsigned int var_15 = 2796418712U;
int zero = 0;
int var_19 = 991927666;
unsigned short var_20 = (unsigned short)23315;
long long int var_21 = 5603937816818025829LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
