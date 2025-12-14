#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1892433589;
unsigned char var_2 = (unsigned char)23;
unsigned char var_10 = (unsigned char)106;
int zero = 0;
unsigned char var_14 = (unsigned char)2;
unsigned long long int var_15 = 18364055302357927538ULL;
void init() {
}

void checksum() {
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
