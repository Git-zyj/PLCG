#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
long long int var_9 = 6044302707611334399LL;
unsigned short var_11 = (unsigned short)497;
int zero = 0;
unsigned long long int var_12 = 1469099346528456334ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2353357885U;
unsigned char var_15 = (unsigned char)252;
unsigned short var_16 = (unsigned short)29439;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
