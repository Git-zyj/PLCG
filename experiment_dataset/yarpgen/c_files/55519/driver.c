#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14722;
unsigned short var_2 = (unsigned short)59276;
short var_3 = (short)-15311;
short var_5 = (short)-12394;
unsigned short var_7 = (unsigned short)13824;
unsigned char var_9 = (unsigned char)90;
int zero = 0;
short var_10 = (short)-9592;
int var_11 = 1855694834;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
