#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)7;
unsigned char var_12 = (unsigned char)210;
unsigned int var_13 = 162709890U;
unsigned long long int var_14 = 40347184204508553ULL;
int zero = 0;
int var_15 = 863656892;
int var_16 = 259320415;
int var_17 = 728580872;
void init() {
}

void checksum() {
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
