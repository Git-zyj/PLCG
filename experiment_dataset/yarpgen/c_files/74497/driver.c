#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3877173452290715779ULL;
int var_2 = 1744136696;
unsigned short var_3 = (unsigned short)29108;
int var_10 = -1957070736;
int zero = 0;
unsigned long long int var_11 = 992644913945910988ULL;
unsigned short var_12 = (unsigned short)23519;
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
