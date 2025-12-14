#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1922317484522117113LL;
unsigned short var_13 = (unsigned short)28120;
long long int var_16 = 8415244767398114543LL;
int zero = 0;
int var_19 = 170844328;
long long int var_20 = 6899681038168725562LL;
void init() {
}

void checksum() {
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
