#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1841958978U;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)165;
unsigned short var_21 = (unsigned short)50317;
signed char var_22 = (signed char)-30;
unsigned int var_23 = 2191859112U;
unsigned short var_24 = (unsigned short)49837;
unsigned int var_25 = 3537522537U;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 3783161192U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
