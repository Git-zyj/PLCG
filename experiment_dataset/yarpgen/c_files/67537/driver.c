#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)22;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 3725960328U;
unsigned char var_21 = (unsigned char)33;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
