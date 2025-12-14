#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2116222841U;
signed char var_2 = (signed char)84;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 854696869U;
short var_9 = (short)8352;
int zero = 0;
unsigned int var_10 = 2024298686U;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)48150;
unsigned char var_13 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
