#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3825506754U;
unsigned char var_3 = (unsigned char)159;
unsigned char var_5 = (unsigned char)89;
unsigned char var_8 = (unsigned char)234;
int zero = 0;
unsigned int var_10 = 725703409U;
unsigned int var_11 = 2251092695U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
