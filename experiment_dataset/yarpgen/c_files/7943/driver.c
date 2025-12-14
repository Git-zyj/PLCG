#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 3246352926245810451ULL;
unsigned char var_11 = (unsigned char)253;
unsigned int var_12 = 75713286U;
short var_15 = (short)23773;
int var_16 = 1985665413;
unsigned char var_17 = (unsigned char)121;
int zero = 0;
int var_18 = -1387131954;
unsigned char var_19 = (unsigned char)119;
short var_20 = (short)-18199;
unsigned char var_21 = (unsigned char)15;
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
