#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3723676527656642171ULL;
long long int var_2 = -3950168854032714726LL;
unsigned char var_5 = (unsigned char)41;
short var_8 = (short)-1154;
int zero = 0;
unsigned short var_10 = (unsigned short)33140;
long long int var_11 = -4734794311832960624LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
