#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)140;
long long int var_5 = 8377707098017502619LL;
unsigned short var_10 = (unsigned short)15181;
int zero = 0;
unsigned short var_12 = (unsigned short)33784;
unsigned long long int var_13 = 17290411881100592810ULL;
int var_14 = 88691751;
long long int var_15 = 2800481439545285894LL;
signed char var_16 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
