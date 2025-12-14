#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6649015556033030922ULL;
long long int var_3 = 184077804740708186LL;
short var_10 = (short)1853;
unsigned char var_13 = (unsigned char)140;
unsigned char var_14 = (unsigned char)152;
int zero = 0;
signed char var_17 = (signed char)32;
signed char var_18 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
