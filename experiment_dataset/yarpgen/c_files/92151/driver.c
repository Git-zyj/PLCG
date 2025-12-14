#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2501704989U;
unsigned short var_6 = (unsigned short)55367;
unsigned int var_10 = 800174208U;
unsigned short var_11 = (unsigned short)57849;
signed char var_12 = (signed char)-12;
unsigned short var_13 = (unsigned short)31709;
int zero = 0;
long long int var_15 = 8736831056651126168LL;
long long int var_16 = -6811665404816217923LL;
void init() {
}

void checksum() {
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
