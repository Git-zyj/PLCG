#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 401609838U;
unsigned long long int var_4 = 1993080161204927486ULL;
long long int var_11 = -5852545096199070123LL;
short var_15 = (short)17732;
unsigned int var_19 = 327645489U;
int zero = 0;
signed char var_20 = (signed char)98;
unsigned short var_21 = (unsigned short)51984;
signed char var_22 = (signed char)73;
void init() {
}

void checksum() {
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
