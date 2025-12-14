#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)7998;
unsigned long long int var_10 = 7312804743950791476ULL;
int var_13 = -931305527;
unsigned char var_14 = (unsigned char)171;
signed char var_15 = (signed char)-54;
int zero = 0;
signed char var_17 = (signed char)40;
signed char var_18 = (signed char)55;
int var_19 = -2001520830;
unsigned char var_20 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
