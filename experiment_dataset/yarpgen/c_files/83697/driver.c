#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)2;
unsigned int var_4 = 3925235765U;
unsigned long long int var_8 = 9120204482917969602ULL;
unsigned char var_9 = (unsigned char)56;
unsigned short var_10 = (unsigned short)19482;
int zero = 0;
unsigned char var_11 = (unsigned char)234;
unsigned char var_12 = (unsigned char)29;
int var_13 = 1363528428;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
