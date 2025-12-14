#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 633448570288627449ULL;
short var_7 = (short)-15139;
signed char var_9 = (signed char)-98;
int var_12 = -146522858;
int zero = 0;
unsigned short var_14 = (unsigned short)61392;
unsigned short var_15 = (unsigned short)63982;
unsigned char var_16 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
