#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)43;
short var_1 = (short)-28158;
int var_2 = 881481320;
short var_5 = (short)-31457;
unsigned long long int var_8 = 9257896378729878640ULL;
unsigned short var_9 = (unsigned short)56862;
unsigned int var_12 = 2325502451U;
unsigned short var_13 = (unsigned short)6252;
int zero = 0;
unsigned long long int var_15 = 900848089144327985ULL;
unsigned char var_16 = (unsigned char)2;
long long int var_17 = -2134259218731393773LL;
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
