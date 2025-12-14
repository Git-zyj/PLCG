#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1008455827;
unsigned long long int var_2 = 14688885846833492102ULL;
unsigned short var_4 = (unsigned short)34420;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)119;
unsigned long long int var_13 = 8676364494679963008ULL;
short var_14 = (short)-32561;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
