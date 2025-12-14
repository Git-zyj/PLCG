#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 2490599188U;
_Bool var_14 = (_Bool)1;
unsigned char var_17 = (unsigned char)161;
int zero = 0;
unsigned int var_18 = 2116805363U;
unsigned short var_19 = (unsigned short)23971;
unsigned int var_20 = 1514707967U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
