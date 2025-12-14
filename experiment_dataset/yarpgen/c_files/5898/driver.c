#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 696138954;
_Bool var_5 = (_Bool)0;
unsigned int var_16 = 1491243085U;
int zero = 0;
unsigned char var_18 = (unsigned char)112;
signed char var_19 = (signed char)-123;
unsigned long long int var_20 = 17144057720295838340ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
