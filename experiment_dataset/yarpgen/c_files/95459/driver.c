#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)108;
unsigned char var_7 = (unsigned char)42;
unsigned char var_14 = (unsigned char)41;
int zero = 0;
unsigned char var_15 = (unsigned char)48;
unsigned char var_16 = (unsigned char)228;
unsigned char var_17 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
