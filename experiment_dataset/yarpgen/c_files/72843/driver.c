#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
signed char var_1 = (signed char)67;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_6 = 1179621952;
unsigned char var_8 = (unsigned char)91;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 527717101U;
unsigned char var_13 = (unsigned char)4;
int zero = 0;
unsigned int var_14 = 3845925179U;
unsigned int var_15 = 3229958659U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
