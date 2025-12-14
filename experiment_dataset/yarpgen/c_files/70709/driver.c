#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)243;
unsigned char var_5 = (unsigned char)86;
unsigned char var_6 = (unsigned char)250;
int var_10 = -1569542437;
int zero = 0;
unsigned int var_15 = 3044704747U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)38577;
void init() {
}

void checksum() {
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
