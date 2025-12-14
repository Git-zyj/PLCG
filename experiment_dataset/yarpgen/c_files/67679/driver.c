#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 293507456337893100ULL;
unsigned char var_5 = (unsigned char)167;
unsigned short var_6 = (unsigned short)52136;
unsigned long long int var_11 = 10805323948729941542ULL;
unsigned short var_16 = (unsigned short)40734;
long long int var_17 = -5394138755439114958LL;
int zero = 0;
int var_20 = 210744825;
unsigned short var_21 = (unsigned short)63756;
unsigned int var_22 = 1992707471U;
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
