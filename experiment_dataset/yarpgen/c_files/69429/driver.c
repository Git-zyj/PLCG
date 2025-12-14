#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1597254768U;
unsigned int var_4 = 1948717336U;
unsigned int var_12 = 3852942813U;
unsigned char var_14 = (unsigned char)124;
int zero = 0;
signed char var_19 = (signed char)-12;
unsigned int var_20 = 2163204604U;
unsigned char var_21 = (unsigned char)19;
signed char var_22 = (signed char)105;
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
