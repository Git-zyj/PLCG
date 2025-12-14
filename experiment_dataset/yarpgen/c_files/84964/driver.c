#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1159281390U;
unsigned int var_2 = 3653197242U;
unsigned int var_3 = 4235462574U;
unsigned int var_5 = 205721095U;
unsigned int var_6 = 2341081716U;
int zero = 0;
unsigned int var_10 = 383842091U;
unsigned int var_11 = 2677209337U;
unsigned int var_12 = 2665495285U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
