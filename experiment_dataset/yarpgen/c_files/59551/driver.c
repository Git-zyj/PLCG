#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1501649190;
int var_5 = 2124482285;
int var_6 = 417516419;
int var_9 = -537304191;
int var_11 = 1590161887;
int zero = 0;
int var_14 = 582014344;
int var_15 = 432768597;
int var_16 = 428947525;
int var_17 = -1882669957;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
