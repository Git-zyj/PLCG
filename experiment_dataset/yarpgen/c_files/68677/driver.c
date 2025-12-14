#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3524;
unsigned short var_1 = (unsigned short)45192;
short var_5 = (short)-15668;
short var_7 = (short)16555;
int zero = 0;
short var_10 = (short)5150;
long long int var_11 = 7786464487609547526LL;
long long int var_12 = -8378603372997173855LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
