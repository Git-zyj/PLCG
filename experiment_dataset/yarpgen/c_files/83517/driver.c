#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)48;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)60269;
unsigned int var_6 = 1379826878U;
unsigned short var_8 = (unsigned short)24228;
int zero = 0;
unsigned int var_12 = 3554449861U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
