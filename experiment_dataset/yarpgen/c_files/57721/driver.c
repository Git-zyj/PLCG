#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2014058124;
unsigned int var_1 = 1533668496U;
short var_2 = (short)5777;
unsigned short var_3 = (unsigned short)56772;
_Bool var_6 = (_Bool)0;
unsigned char var_11 = (unsigned char)47;
int zero = 0;
unsigned int var_13 = 884123260U;
signed char var_14 = (signed char)-106;
signed char var_15 = (signed char)-106;
signed char var_16 = (signed char)-123;
short var_17 = (short)22899;
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
