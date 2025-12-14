#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1739574524863618117LL;
unsigned int var_1 = 3660839170U;
short var_2 = (short)-20200;
unsigned char var_6 = (unsigned char)173;
unsigned long long int var_14 = 11973194220212987730ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)1434;
unsigned char var_17 = (unsigned char)152;
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
