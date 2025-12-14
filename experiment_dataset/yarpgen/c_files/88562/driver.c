#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2609817706U;
unsigned int var_8 = 1921781187U;
unsigned long long int var_9 = 9364288830138469558ULL;
short var_10 = (short)30548;
int zero = 0;
signed char var_11 = (signed char)-103;
unsigned int var_12 = 33919230U;
unsigned short var_13 = (unsigned short)12916;
void init() {
}

void checksum() {
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
