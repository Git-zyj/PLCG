#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3239512045U;
signed char var_5 = (signed char)83;
unsigned short var_6 = (unsigned short)60089;
_Bool var_7 = (_Bool)1;
int var_9 = -1005750610;
int zero = 0;
unsigned short var_14 = (unsigned short)6242;
unsigned int var_15 = 785593849U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
