#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 642773242;
unsigned char var_10 = (unsigned char)141;
unsigned char var_13 = (unsigned char)108;
int zero = 0;
signed char var_16 = (signed char)62;
int var_17 = -923230000;
int var_18 = 1527387190;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
