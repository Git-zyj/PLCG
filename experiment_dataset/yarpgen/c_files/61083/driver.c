#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3188270689460455817LL;
unsigned int var_16 = 3724465004U;
int zero = 0;
short var_19 = (short)-24690;
unsigned char var_20 = (unsigned char)2;
unsigned long long int var_21 = 15211145532827709533ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
