#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)44;
unsigned char var_12 = (unsigned char)173;
unsigned long long int var_13 = 16568401451410366311ULL;
int var_16 = 161734667;
short var_18 = (short)-27977;
int zero = 0;
unsigned short var_19 = (unsigned short)18083;
unsigned char var_20 = (unsigned char)87;
int var_21 = 776024574;
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
