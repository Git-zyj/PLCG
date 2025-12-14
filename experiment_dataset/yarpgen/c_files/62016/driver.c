#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18968;
unsigned short var_2 = (unsigned short)61422;
unsigned int var_3 = 3056748824U;
long long int var_4 = 7256200870199187086LL;
short var_6 = (short)-15802;
int var_9 = 461433291;
unsigned char var_11 = (unsigned char)148;
int zero = 0;
int var_12 = -1686654125;
unsigned int var_13 = 3653978668U;
short var_14 = (short)27785;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
