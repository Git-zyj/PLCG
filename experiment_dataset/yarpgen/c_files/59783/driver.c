#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)185;
unsigned long long int var_3 = 15789413000033429622ULL;
signed char var_6 = (signed char)-1;
long long int var_7 = -8760776145515067522LL;
unsigned short var_9 = (unsigned short)6270;
int zero = 0;
int var_11 = -1662625450;
unsigned int var_12 = 1053221744U;
short var_13 = (short)-22046;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
