#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22525;
unsigned short var_3 = (unsigned short)29878;
long long int var_10 = -9213837950699820952LL;
int zero = 0;
unsigned short var_13 = (unsigned short)33819;
unsigned short var_14 = (unsigned short)42019;
void init() {
}

void checksum() {
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
