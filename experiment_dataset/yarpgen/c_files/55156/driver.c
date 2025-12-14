#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7691566127360261964LL;
short var_10 = (short)-32732;
unsigned long long int var_12 = 2077287827869538879ULL;
int zero = 0;
signed char var_20 = (signed char)112;
unsigned int var_21 = 1245175254U;
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
