#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)211;
signed char var_16 = (signed char)83;
unsigned long long int var_17 = 7610614268942646739ULL;
int zero = 0;
int var_20 = -93485597;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)247;
unsigned char var_23 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
