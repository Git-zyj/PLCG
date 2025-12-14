#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)38129;
unsigned char var_8 = (unsigned char)160;
unsigned short var_11 = (unsigned short)54190;
unsigned char var_15 = (unsigned char)244;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1378847842U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
