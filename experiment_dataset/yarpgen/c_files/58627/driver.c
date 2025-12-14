#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22816;
long long int var_10 = 6927296500734773281LL;
unsigned long long int var_13 = 7900072185738230864ULL;
int zero = 0;
unsigned long long int var_15 = 8109972567362777422ULL;
short var_16 = (short)-22881;
unsigned short var_17 = (unsigned short)3553;
void init() {
}

void checksum() {
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
