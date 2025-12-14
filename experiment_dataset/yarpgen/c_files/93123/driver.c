#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)146;
unsigned char var_3 = (unsigned char)126;
unsigned char var_5 = (unsigned char)97;
unsigned char var_6 = (unsigned char)33;
unsigned char var_10 = (unsigned char)196;
unsigned char var_13 = (unsigned char)241;
unsigned char var_14 = (unsigned char)64;
int zero = 0;
unsigned char var_18 = (unsigned char)236;
unsigned char var_19 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
