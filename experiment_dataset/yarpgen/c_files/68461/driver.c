#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -1777198937;
unsigned short var_6 = (unsigned short)35651;
_Bool var_7 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2011877715U;
int var_19 = -1990077504;
unsigned short var_20 = (unsigned short)46637;
_Bool var_21 = (_Bool)1;
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
