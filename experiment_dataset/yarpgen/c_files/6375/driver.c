#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3321811805U;
unsigned long long int var_6 = 5280337762062591204ULL;
signed char var_8 = (signed char)79;
int var_11 = 1766709956;
int zero = 0;
signed char var_14 = (signed char)71;
unsigned int var_15 = 3809095705U;
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
