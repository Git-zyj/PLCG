#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4546014759666458524LL;
_Bool var_2 = (_Bool)0;
short var_6 = (short)-17951;
long long int var_8 = 1630058787369600497LL;
unsigned int var_10 = 2396086131U;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-119;
short var_13 = (short)-31046;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
