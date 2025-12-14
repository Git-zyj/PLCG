#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16536;
unsigned short var_7 = (unsigned short)42592;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)19689;
int zero = 0;
unsigned int var_12 = 2643137709U;
int var_13 = -357143798;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
