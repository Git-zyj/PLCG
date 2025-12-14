#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1870140114U;
unsigned char var_2 = (unsigned char)137;
int var_3 = -239217697;
unsigned int var_11 = 202857750U;
int zero = 0;
signed char var_18 = (signed char)-107;
short var_19 = (short)32017;
signed char var_20 = (signed char)-19;
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
