#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)135;
unsigned short var_5 = (unsigned short)23957;
unsigned char var_10 = (unsigned char)227;
unsigned char var_13 = (unsigned char)63;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3907640219U;
unsigned short var_17 = (unsigned short)11366;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
