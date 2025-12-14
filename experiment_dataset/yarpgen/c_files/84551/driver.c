#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2906192862U;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-80;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)-97;
unsigned int var_17 = 4071712737U;
unsigned char var_18 = (unsigned char)11;
unsigned char var_19 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
