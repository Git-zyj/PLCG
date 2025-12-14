#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
signed char var_2 = (signed char)-123;
short var_6 = (short)-24925;
unsigned short var_8 = (unsigned short)21703;
unsigned long long int var_11 = 9436292270929828807ULL;
short var_13 = (short)-9375;
int zero = 0;
int var_14 = 60686262;
signed char var_15 = (signed char)79;
int var_16 = 1636402821;
unsigned long long int var_17 = 17674772658913464145ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
