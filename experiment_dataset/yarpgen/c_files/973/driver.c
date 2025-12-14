#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2200487276U;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)56278;
unsigned int var_7 = 1346798418U;
unsigned int var_8 = 1042692081U;
short var_11 = (short)24554;
int var_16 = -1440018382;
int zero = 0;
long long int var_18 = -2255687461571202479LL;
unsigned int var_19 = 4263621123U;
unsigned short var_20 = (unsigned short)42333;
unsigned int var_21 = 3007569991U;
unsigned long long int var_22 = 1813252881663369622ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
