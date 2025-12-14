#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5855;
signed char var_6 = (signed char)87;
long long int var_7 = 315711349490651934LL;
int zero = 0;
unsigned short var_12 = (unsigned short)53969;
unsigned short var_13 = (unsigned short)21378;
short var_14 = (short)-19226;
unsigned char var_15 = (unsigned char)202;
void init() {
}

void checksum() {
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
