#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14757506870384578375ULL;
unsigned char var_3 = (unsigned char)199;
unsigned char var_4 = (unsigned char)103;
unsigned char var_6 = (unsigned char)155;
unsigned short var_8 = (unsigned short)24403;
signed char var_9 = (signed char)113;
int zero = 0;
unsigned int var_11 = 4234484334U;
signed char var_12 = (signed char)(-127 - 1);
unsigned char var_13 = (unsigned char)17;
unsigned short var_14 = (unsigned short)28424;
unsigned long long int var_15 = 9310390577236784257ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
