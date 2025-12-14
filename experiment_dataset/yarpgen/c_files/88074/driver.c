#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7296680550855344572ULL;
unsigned int var_3 = 107157346U;
short var_4 = (short)15845;
unsigned long long int var_6 = 18422243316309782074ULL;
unsigned char var_8 = (unsigned char)176;
signed char var_9 = (signed char)-98;
unsigned int var_11 = 394472441U;
long long int var_12 = 3681238359704752017LL;
unsigned char var_13 = (unsigned char)5;
int zero = 0;
int var_14 = 217856401;
unsigned int var_15 = 3793817084U;
unsigned char var_16 = (unsigned char)100;
signed char var_17 = (signed char)-102;
unsigned short var_18 = (unsigned short)50291;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
