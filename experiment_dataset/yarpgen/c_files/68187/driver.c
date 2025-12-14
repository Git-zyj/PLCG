#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -466198499526716015LL;
unsigned int var_4 = 1449985630U;
unsigned char var_5 = (unsigned char)41;
unsigned char var_7 = (unsigned char)186;
short var_8 = (short)-3033;
unsigned long long int var_9 = 5893204184720720023ULL;
signed char var_11 = (signed char)84;
signed char var_12 = (signed char)-92;
signed char var_15 = (signed char)-102;
int zero = 0;
short var_16 = (short)28416;
signed char var_17 = (signed char)95;
short var_18 = (short)16464;
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
