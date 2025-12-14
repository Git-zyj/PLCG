#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -691941125070419726LL;
unsigned short var_3 = (unsigned short)33474;
long long int var_9 = 8180123713375124458LL;
unsigned short var_10 = (unsigned short)58012;
int zero = 0;
unsigned short var_14 = (unsigned short)53415;
unsigned short var_15 = (unsigned short)54075;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
