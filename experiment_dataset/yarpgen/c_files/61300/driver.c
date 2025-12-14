#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)81;
unsigned char var_6 = (unsigned char)124;
unsigned char var_9 = (unsigned char)155;
unsigned char var_12 = (unsigned char)112;
unsigned char var_14 = (unsigned char)165;
int zero = 0;
unsigned char var_15 = (unsigned char)159;
unsigned char var_16 = (unsigned char)233;
void init() {
}

void checksum() {
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
