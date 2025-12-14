#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = -1706164427;
unsigned long long int var_6 = 2626981040914997642ULL;
long long int var_15 = 2032036467871753867LL;
int zero = 0;
long long int var_19 = 8796938467311407417LL;
long long int var_20 = 5353148860593812307LL;
signed char var_21 = (signed char)72;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
