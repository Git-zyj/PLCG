#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)131;
unsigned short var_15 = (unsigned short)10084;
short var_16 = (short)-22513;
int zero = 0;
unsigned long long int var_19 = 4206541123617490999ULL;
short var_20 = (short)-5133;
short var_21 = (short)-2358;
short var_22 = (short)-1533;
unsigned short var_23 = (unsigned short)36748;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
