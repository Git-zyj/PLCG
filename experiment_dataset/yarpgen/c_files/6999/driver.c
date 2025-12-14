#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15729;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int zero = 0;
long long int var_11 = 5392162688285078789LL;
unsigned char var_12 = (unsigned char)3;
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
