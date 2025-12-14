#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7082445033329873121ULL;
unsigned char var_6 = (unsigned char)165;
long long int var_9 = -5736217755205264600LL;
int zero = 0;
int var_15 = -1921328155;
signed char var_16 = (signed char)72;
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
