#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3648035769U;
int var_6 = 723275057;
unsigned short var_9 = (unsigned short)43076;
int var_10 = 1298533438;
int zero = 0;
int var_11 = 364034502;
unsigned long long int var_12 = 5285833716816266185ULL;
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
