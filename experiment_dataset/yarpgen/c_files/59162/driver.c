#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)166;
signed char var_7 = (signed char)-115;
unsigned short var_13 = (unsigned short)4697;
int zero = 0;
unsigned char var_14 = (unsigned char)63;
unsigned char var_15 = (unsigned char)132;
unsigned char var_16 = (unsigned char)63;
void init() {
}

void checksum() {
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
