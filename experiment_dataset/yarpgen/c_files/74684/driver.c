#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1480736035U;
unsigned char var_11 = (unsigned char)209;
unsigned char var_12 = (unsigned char)16;
int zero = 0;
short var_15 = (short)-21199;
unsigned long long int var_16 = 3581526424266042941ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
