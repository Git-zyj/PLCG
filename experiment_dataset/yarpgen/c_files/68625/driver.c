#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 13807003513900406782ULL;
unsigned int var_11 = 1508389371U;
unsigned int var_14 = 923725805U;
int zero = 0;
unsigned short var_15 = (unsigned short)65427;
unsigned char var_16 = (unsigned char)238;
void init() {
}

void checksum() {
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
