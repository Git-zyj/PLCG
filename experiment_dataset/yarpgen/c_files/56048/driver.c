#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1642822839;
signed char var_8 = (signed char)87;
unsigned char var_10 = (unsigned char)205;
int var_15 = 1048011919;
unsigned char var_17 = (unsigned char)69;
int zero = 0;
unsigned char var_19 = (unsigned char)230;
int var_20 = -482137067;
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
