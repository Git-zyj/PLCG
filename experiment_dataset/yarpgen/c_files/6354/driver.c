#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned int var_3 = 400662337U;
long long int var_8 = -8222109026519588915LL;
signed char var_12 = (signed char)-72;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)39075;
long long int var_19 = -8322489179098523874LL;
signed char var_20 = (signed char)-104;
long long int var_21 = 1254874624965185463LL;
void init() {
}

void checksum() {
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
