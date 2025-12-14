#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3727844482U;
unsigned short var_5 = (unsigned short)20073;
unsigned long long int var_10 = 16017543670260440498ULL;
unsigned short var_12 = (unsigned short)55346;
unsigned int var_15 = 930433614U;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)1097;
unsigned long long int var_21 = 798687116718328541ULL;
void init() {
}

void checksum() {
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
