#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7700560330506292595LL;
unsigned long long int var_8 = 10132991390612899206ULL;
unsigned char var_10 = (unsigned char)70;
short var_11 = (short)18897;
unsigned long long int var_14 = 14635766135474135314ULL;
int zero = 0;
short var_15 = (short)-20111;
unsigned short var_16 = (unsigned short)10395;
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
