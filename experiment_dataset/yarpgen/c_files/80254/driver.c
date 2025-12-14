#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1983857872;
signed char var_8 = (signed char)122;
unsigned char var_12 = (unsigned char)42;
_Bool var_13 = (_Bool)1;
unsigned int var_16 = 3750610788U;
int zero = 0;
unsigned char var_18 = (unsigned char)195;
int var_19 = 697208715;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
