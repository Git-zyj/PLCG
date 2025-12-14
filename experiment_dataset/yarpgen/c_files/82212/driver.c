#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2631685875U;
int var_4 = 281568734;
signed char var_6 = (signed char)-14;
int zero = 0;
unsigned int var_12 = 1199148947U;
unsigned char var_13 = (unsigned char)173;
int var_14 = -850020263;
signed char var_15 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
