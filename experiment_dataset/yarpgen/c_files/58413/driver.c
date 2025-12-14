#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 925792819877363732LL;
signed char var_4 = (signed char)63;
unsigned char var_9 = (unsigned char)159;
long long int var_11 = -6155740275132682121LL;
int zero = 0;
unsigned long long int var_15 = 4576656838828921805ULL;
long long int var_16 = -8112554069068525051LL;
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
