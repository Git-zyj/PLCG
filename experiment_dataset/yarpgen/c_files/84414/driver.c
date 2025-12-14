#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9264042466726605147ULL;
int var_13 = -611800268;
unsigned char var_17 = (unsigned char)29;
int zero = 0;
int var_18 = -1382129703;
int var_19 = 2005854247;
signed char var_20 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
