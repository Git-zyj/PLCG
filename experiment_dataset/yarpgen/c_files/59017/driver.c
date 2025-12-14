#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)145;
short var_2 = (short)6821;
unsigned long long int var_3 = 15287516277258982252ULL;
short var_5 = (short)-3112;
short var_8 = (short)12450;
short var_10 = (short)-21835;
int zero = 0;
signed char var_11 = (signed char)127;
short var_12 = (short)17342;
unsigned long long int var_13 = 10611377265118880345ULL;
unsigned int var_14 = 1224087765U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
