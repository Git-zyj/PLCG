#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1048896459U;
unsigned char var_7 = (unsigned char)83;
unsigned char var_12 = (unsigned char)194;
unsigned int var_13 = 1999794030U;
int zero = 0;
unsigned short var_14 = (unsigned short)7210;
unsigned int var_15 = 1838625220U;
void init() {
}

void checksum() {
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
