#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12054411078585058020ULL;
unsigned char var_3 = (unsigned char)86;
short var_6 = (short)23722;
unsigned char var_9 = (unsigned char)81;
unsigned int var_10 = 28909836U;
int zero = 0;
unsigned short var_13 = (unsigned short)34341;
signed char var_14 = (signed char)15;
int var_15 = 952673574;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
