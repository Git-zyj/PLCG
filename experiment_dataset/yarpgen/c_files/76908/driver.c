#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1158171512U;
unsigned int var_5 = 3783454750U;
long long int var_15 = 3262028539106916611LL;
int zero = 0;
unsigned char var_17 = (unsigned char)30;
_Bool var_18 = (_Bool)0;
long long int var_19 = 8030829395926220594LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
