#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)28;
unsigned short var_4 = (unsigned short)41430;
int var_6 = 1338870923;
unsigned int var_7 = 3876873480U;
int var_8 = 1405650600;
unsigned char var_10 = (unsigned char)35;
int zero = 0;
int var_11 = 1106979238;
int var_12 = 1928087706;
void init() {
}

void checksum() {
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
