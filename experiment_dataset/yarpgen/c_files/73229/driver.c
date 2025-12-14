#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -267298934;
int var_2 = -1237525121;
int var_14 = -654825640;
int var_15 = -2008184047;
int var_17 = -327707153;
int zero = 0;
int var_19 = 353940741;
unsigned long long int var_20 = 3976232616670707642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
