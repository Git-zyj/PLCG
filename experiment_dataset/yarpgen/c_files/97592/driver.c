#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
unsigned char var_2 = (unsigned char)234;
signed char var_7 = (signed char)-13;
_Bool var_9 = (_Bool)1;
long long int var_11 = -6894525167369915131LL;
short var_12 = (short)16395;
int zero = 0;
unsigned char var_15 = (unsigned char)46;
unsigned long long int var_16 = 578587319554264376ULL;
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
