#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)200;
unsigned char var_13 = (unsigned char)215;
int zero = 0;
unsigned long long int var_17 = 11471556915165227479ULL;
unsigned long long int var_18 = 13171529334822146641ULL;
unsigned char var_19 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
