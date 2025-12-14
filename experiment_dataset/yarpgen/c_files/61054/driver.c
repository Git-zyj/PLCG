#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1385103860U;
signed char var_11 = (signed char)-111;
unsigned long long int var_15 = 1150633303951819826ULL;
int zero = 0;
short var_18 = (short)12293;
unsigned long long int var_19 = 808220471865220605ULL;
unsigned char var_20 = (unsigned char)5;
unsigned int var_21 = 2904946239U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
