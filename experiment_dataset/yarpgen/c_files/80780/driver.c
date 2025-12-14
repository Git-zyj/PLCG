#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9017483698981050341LL;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)152;
unsigned int var_6 = 2603884561U;
unsigned int var_8 = 2089268670U;
unsigned short var_10 = (unsigned short)24581;
long long int var_12 = 7032347664647165552LL;
int zero = 0;
unsigned int var_16 = 1691025029U;
int var_17 = -463004314;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
