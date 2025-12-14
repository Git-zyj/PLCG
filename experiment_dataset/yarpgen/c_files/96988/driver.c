#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8887;
long long int var_2 = 170044075951977853LL;
unsigned long long int var_6 = 4851799396998842210ULL;
int zero = 0;
int var_14 = 1507425954;
unsigned long long int var_15 = 15580163166644946491ULL;
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
