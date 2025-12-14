#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4868828125312713696LL;
signed char var_1 = (signed char)6;
short var_4 = (short)-7523;
unsigned int var_8 = 982757757U;
signed char var_11 = (signed char)-10;
int var_12 = 105036815;
int zero = 0;
unsigned short var_14 = (unsigned short)63482;
unsigned char var_15 = (unsigned char)202;
void init() {
}

void checksum() {
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
