#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12726105983403270182ULL;
unsigned short var_5 = (unsigned short)17072;
long long int var_6 = -4939567716927188467LL;
int zero = 0;
short var_11 = (short)23254;
signed char var_12 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
