#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)30227;
int var_13 = -1252867789;
unsigned int var_17 = 1154584047U;
unsigned char var_19 = (unsigned char)212;
int zero = 0;
unsigned char var_20 = (unsigned char)146;
signed char var_21 = (signed char)-103;
void init() {
}

void checksum() {
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
