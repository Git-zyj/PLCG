#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 673160722;
unsigned char var_3 = (unsigned char)44;
long long int var_5 = -8378987043710791352LL;
unsigned short var_8 = (unsigned short)36950;
unsigned long long int var_11 = 10754155690890310948ULL;
int zero = 0;
long long int var_16 = 5662696067572953578LL;
unsigned short var_17 = (unsigned short)2596;
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
