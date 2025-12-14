#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15762794367571739324ULL;
unsigned int var_4 = 1362970580U;
unsigned char var_10 = (unsigned char)164;
unsigned char var_14 = (unsigned char)73;
int zero = 0;
short var_18 = (short)6346;
signed char var_19 = (signed char)48;
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
