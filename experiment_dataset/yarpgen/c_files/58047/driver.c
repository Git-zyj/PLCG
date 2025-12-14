#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4222456386743773788LL;
long long int var_3 = 7959716020195907982LL;
unsigned short var_6 = (unsigned short)37570;
unsigned char var_8 = (unsigned char)197;
int zero = 0;
long long int var_16 = -821729170471527904LL;
unsigned long long int var_17 = 17973903476302021193ULL;
void init() {
}

void checksum() {
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
