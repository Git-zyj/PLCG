#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2151446676U;
unsigned char var_2 = (unsigned char)95;
short var_3 = (short)32365;
unsigned char var_4 = (unsigned char)108;
unsigned char var_6 = (unsigned char)64;
int zero = 0;
signed char var_10 = (signed char)33;
int var_11 = -2007773683;
short var_12 = (short)8316;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
