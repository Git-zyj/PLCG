#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2518936818955324408ULL;
short var_3 = (short)-12680;
unsigned short var_7 = (unsigned short)47394;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 10802706156016322422ULL;
void init() {
}

void checksum() {
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
