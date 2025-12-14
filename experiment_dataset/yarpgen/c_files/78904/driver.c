#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)17476;
unsigned int var_8 = 1011684771U;
unsigned char var_12 = (unsigned char)133;
unsigned short var_14 = (unsigned short)61783;
int zero = 0;
long long int var_15 = 3972447167444017111LL;
unsigned char var_16 = (unsigned char)129;
void init() {
}

void checksum() {
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
