#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7285;
long long int var_2 = -4514316320133102401LL;
int var_4 = 1484046256;
unsigned char var_5 = (unsigned char)62;
unsigned int var_11 = 1597495763U;
long long int var_12 = 8356272659158037365LL;
int zero = 0;
long long int var_13 = -9003137298438518874LL;
long long int var_14 = 7258935673982182955LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)26823;
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
