#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2127324408;
_Bool var_2 = (_Bool)0;
int var_5 = -333086602;
unsigned short var_7 = (unsigned short)1527;
signed char var_10 = (signed char)-19;
int zero = 0;
unsigned int var_11 = 1959971054U;
int var_12 = -247112063;
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
