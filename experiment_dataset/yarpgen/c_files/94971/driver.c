#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1499989447;
unsigned char var_7 = (unsigned char)56;
short var_8 = (short)20540;
unsigned int var_13 = 3636817168U;
unsigned char var_15 = (unsigned char)34;
int zero = 0;
int var_16 = 596902913;
signed char var_17 = (signed char)73;
unsigned long long int var_18 = 4727486254628136248ULL;
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
