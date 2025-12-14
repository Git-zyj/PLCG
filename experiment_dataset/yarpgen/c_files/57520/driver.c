#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1308816564U;
short var_3 = (short)-4298;
short var_4 = (short)4197;
short var_6 = (short)6431;
long long int var_10 = 7683508383915749448LL;
signed char var_13 = (signed char)-27;
int zero = 0;
long long int var_14 = -5921624275018937871LL;
unsigned char var_15 = (unsigned char)158;
unsigned char var_16 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
