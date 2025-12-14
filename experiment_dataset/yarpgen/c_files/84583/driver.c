#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)1;
unsigned long long int var_11 = 15199689468689581502ULL;
unsigned int var_13 = 2793740456U;
int var_14 = 624850816;
int zero = 0;
unsigned char var_15 = (unsigned char)15;
unsigned long long int var_16 = 8674322776107782393ULL;
unsigned short var_17 = (unsigned short)8810;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
