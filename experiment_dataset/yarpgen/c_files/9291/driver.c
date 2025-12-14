#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19772;
int var_2 = 739304943;
unsigned short var_6 = (unsigned short)64105;
short var_9 = (short)18118;
unsigned int var_11 = 2194949158U;
unsigned long long int var_12 = 16016837612750083416ULL;
int zero = 0;
long long int var_17 = -5878886769575111797LL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 11540719924549390116ULL;
unsigned char var_21 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
