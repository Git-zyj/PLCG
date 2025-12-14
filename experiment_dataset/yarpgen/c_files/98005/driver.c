#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2187699398U;
short var_1 = (short)5537;
short var_3 = (short)4200;
unsigned short var_5 = (unsigned short)61999;
short var_6 = (short)-21297;
unsigned char var_7 = (unsigned char)6;
unsigned long long int var_8 = 15053480552012529006ULL;
unsigned long long int var_10 = 2823855744512375241ULL;
unsigned char var_11 = (unsigned char)239;
int zero = 0;
signed char var_12 = (signed char)-39;
int var_13 = -2137036634;
void init() {
}

void checksum() {
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
