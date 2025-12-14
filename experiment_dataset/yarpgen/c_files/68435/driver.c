#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2957355302U;
unsigned short var_6 = (unsigned short)3201;
unsigned short var_10 = (unsigned short)8048;
int var_14 = 777319671;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_19 = -811024290;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 83122262U;
void init() {
}

void checksum() {
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
