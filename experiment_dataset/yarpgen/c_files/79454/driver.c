#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2783733548U;
_Bool var_8 = (_Bool)0;
unsigned int var_15 = 1311100065U;
unsigned int var_16 = 3997229690U;
int zero = 0;
unsigned long long int var_20 = 17005954506917078528ULL;
unsigned long long int var_21 = 16991830237781012059ULL;
unsigned char var_22 = (unsigned char)146;
void init() {
}

void checksum() {
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
