#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33896;
int var_4 = 1942941587;
unsigned short var_6 = (unsigned short)6328;
int zero = 0;
int var_10 = 1807319883;
unsigned short var_11 = (unsigned short)55562;
int var_12 = 850943238;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
