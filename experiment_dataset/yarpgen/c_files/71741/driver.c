#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 496516250U;
unsigned short var_4 = (unsigned short)12698;
unsigned int var_5 = 385603717U;
short var_6 = (short)5177;
int zero = 0;
unsigned char var_10 = (unsigned char)168;
unsigned char var_11 = (unsigned char)212;
signed char var_12 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
