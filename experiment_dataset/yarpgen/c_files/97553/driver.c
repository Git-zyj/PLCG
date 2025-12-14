#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 85762660U;
unsigned long long int var_2 = 2262718943607509484ULL;
unsigned char var_3 = (unsigned char)71;
unsigned long long int var_5 = 10716199709515830484ULL;
short var_6 = (short)31510;
unsigned int var_9 = 2255788436U;
int zero = 0;
signed char var_10 = (signed char)52;
unsigned long long int var_11 = 2853283590942115469ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
