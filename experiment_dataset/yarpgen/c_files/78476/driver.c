#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)215;
short var_2 = (short)-4550;
unsigned int var_4 = 2700407233U;
short var_5 = (short)21516;
unsigned int var_6 = 1529490361U;
int var_10 = 143986466;
short var_12 = (short)12572;
signed char var_14 = (signed char)47;
signed char var_15 = (signed char)-28;
unsigned long long int var_16 = 1986680874615481434ULL;
int zero = 0;
short var_18 = (short)13078;
signed char var_19 = (signed char)50;
unsigned char var_20 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
