#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
signed char var_5 = (signed char)70;
unsigned char var_15 = (unsigned char)95;
signed char var_16 = (signed char)108;
int zero = 0;
unsigned int var_18 = 1853334809U;
unsigned char var_19 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
