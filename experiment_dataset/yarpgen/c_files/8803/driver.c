#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14856;
unsigned int var_1 = 1355177237U;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 2427330019U;
int var_10 = -1617395096;
short var_11 = (short)-13735;
int zero = 0;
short var_13 = (short)-10121;
unsigned char var_14 = (unsigned char)243;
signed char var_15 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
