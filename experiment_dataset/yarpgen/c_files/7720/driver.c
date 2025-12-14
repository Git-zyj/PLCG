#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16116;
unsigned char var_5 = (unsigned char)242;
signed char var_6 = (signed char)4;
unsigned char var_7 = (unsigned char)252;
short var_12 = (short)3793;
int zero = 0;
unsigned char var_14 = (unsigned char)174;
unsigned int var_15 = 983044107U;
unsigned int var_16 = 731345427U;
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
