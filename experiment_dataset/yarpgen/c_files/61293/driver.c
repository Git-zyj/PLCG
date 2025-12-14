#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30172;
long long int var_2 = -706537845204681552LL;
int var_11 = 593920294;
unsigned int var_19 = 3138376853U;
int zero = 0;
unsigned char var_20 = (unsigned char)194;
int var_21 = 978116369;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
