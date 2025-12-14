#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 8226435505255047113ULL;
unsigned long long int var_11 = 7124694713784263945ULL;
unsigned long long int var_14 = 16747529581340449339ULL;
unsigned long long int var_16 = 18218672620623504429ULL;
int zero = 0;
unsigned long long int var_19 = 6447889655079100501ULL;
unsigned char var_20 = (unsigned char)224;
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
