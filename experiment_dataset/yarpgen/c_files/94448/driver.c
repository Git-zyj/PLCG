#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)122;
signed char var_8 = (signed char)-67;
short var_14 = (short)24519;
unsigned char var_17 = (unsigned char)53;
int zero = 0;
int var_19 = 1460265878;
unsigned char var_20 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
