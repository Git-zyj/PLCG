#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4171;
unsigned long long int var_4 = 8602985949971563334ULL;
unsigned char var_8 = (unsigned char)87;
short var_9 = (short)9219;
int zero = 0;
unsigned long long int var_11 = 11006161539528903295ULL;
unsigned long long int var_12 = 13231643516253281974ULL;
signed char var_13 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
