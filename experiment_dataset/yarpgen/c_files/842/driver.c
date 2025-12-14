#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1950526713;
unsigned int var_3 = 2310927118U;
unsigned char var_16 = (unsigned char)237;
int zero = 0;
unsigned short var_19 = (unsigned short)8712;
int var_20 = 1674734686;
unsigned short var_21 = (unsigned short)42129;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
