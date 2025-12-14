#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1756676410;
int var_1 = -1203889750;
int var_3 = -631406538;
int var_6 = -1972100356;
int var_8 = -62282926;
int zero = 0;
int var_19 = 980220845;
int var_20 = 1854315789;
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
