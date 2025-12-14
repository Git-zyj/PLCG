#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3176163758U;
unsigned int var_3 = 2218326362U;
unsigned int var_7 = 1604014136U;
int zero = 0;
unsigned char var_13 = (unsigned char)32;
unsigned int var_14 = 3919995922U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
