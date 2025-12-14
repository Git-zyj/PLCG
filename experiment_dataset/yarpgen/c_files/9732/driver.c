#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1996726429;
unsigned short var_12 = (unsigned short)62228;
int var_15 = 413908806;
unsigned long long int var_16 = 15238454668900243771ULL;
int zero = 0;
unsigned int var_19 = 90777381U;
unsigned short var_20 = (unsigned short)47766;
int var_21 = 1259177095;
signed char var_22 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
