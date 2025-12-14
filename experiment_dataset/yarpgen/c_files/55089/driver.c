#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42304;
short var_2 = (short)15790;
unsigned long long int var_5 = 5818731844899826322ULL;
unsigned long long int var_6 = 1859823138499918814ULL;
unsigned char var_7 = (unsigned char)50;
signed char var_8 = (signed char)72;
short var_10 = (short)29117;
int zero = 0;
signed char var_11 = (signed char)99;
unsigned int var_12 = 1508867764U;
long long int var_13 = -9208523551110341506LL;
short var_14 = (short)12288;
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
