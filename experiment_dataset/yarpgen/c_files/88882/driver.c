#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)146;
unsigned int var_10 = 2848834413U;
signed char var_13 = (signed char)88;
int zero = 0;
unsigned int var_20 = 278727332U;
unsigned short var_21 = (unsigned short)52504;
unsigned int var_22 = 1834009154U;
unsigned int var_23 = 1256051228U;
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
