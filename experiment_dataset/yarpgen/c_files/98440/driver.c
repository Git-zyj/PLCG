#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8632979715491854966ULL;
unsigned long long int var_2 = 16135820173172676248ULL;
unsigned short var_3 = (unsigned short)53687;
long long int var_4 = 8262574085325243932LL;
long long int var_5 = 8715518271375392757LL;
signed char var_7 = (signed char)-92;
int var_8 = -1785709565;
unsigned long long int var_12 = 14911632637883238141ULL;
int var_13 = 955440050;
int zero = 0;
long long int var_14 = -4906178836624344447LL;
unsigned short var_15 = (unsigned short)32801;
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
