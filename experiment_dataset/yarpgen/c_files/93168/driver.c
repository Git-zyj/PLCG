#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3993986120185657313ULL;
signed char var_2 = (signed char)124;
unsigned int var_8 = 513651886U;
unsigned short var_13 = (unsigned short)93;
int zero = 0;
unsigned int var_16 = 560637331U;
int var_17 = 1670507502;
void init() {
}

void checksum() {
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
