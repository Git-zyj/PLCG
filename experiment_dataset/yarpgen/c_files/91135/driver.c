#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4051;
long long int var_5 = -5255156130658431028LL;
unsigned long long int var_12 = 4639283985932479228ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)247;
unsigned int var_15 = 3824687774U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
