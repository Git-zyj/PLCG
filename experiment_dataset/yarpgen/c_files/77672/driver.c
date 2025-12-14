#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)70;
long long int var_4 = -5586803376470493047LL;
int var_6 = -2022882405;
long long int var_10 = 7443178047763328215LL;
int zero = 0;
short var_13 = (short)5224;
unsigned char var_14 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
