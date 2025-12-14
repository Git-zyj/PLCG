#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3826424470U;
unsigned char var_7 = (unsigned char)14;
unsigned char var_11 = (unsigned char)239;
unsigned int var_15 = 1039072990U;
int var_16 = -507150747;
unsigned char var_17 = (unsigned char)5;
signed char var_18 = (signed char)92;
int zero = 0;
unsigned int var_19 = 53033402U;
unsigned char var_20 = (unsigned char)146;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 2710117992863134942ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
