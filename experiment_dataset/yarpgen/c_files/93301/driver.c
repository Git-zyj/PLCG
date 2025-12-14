#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)194;
unsigned char var_7 = (unsigned char)120;
unsigned char var_9 = (unsigned char)23;
unsigned char var_12 = (unsigned char)221;
int zero = 0;
unsigned char var_13 = (unsigned char)69;
unsigned char var_14 = (unsigned char)139;
unsigned char var_15 = (unsigned char)198;
unsigned char var_16 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
