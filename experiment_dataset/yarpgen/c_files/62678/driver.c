#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)72;
unsigned long long int var_4 = 11536144138658891234ULL;
signed char var_5 = (signed char)44;
unsigned short var_6 = (unsigned short)25849;
unsigned short var_11 = (unsigned short)54773;
int zero = 0;
long long int var_15 = -5830526493673360770LL;
unsigned int var_16 = 2752377902U;
int var_17 = 1566387006;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
