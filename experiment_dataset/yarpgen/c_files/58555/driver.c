#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
short var_1 = (short)17001;
unsigned short var_5 = (unsigned short)15177;
long long int var_6 = -5010701959624919647LL;
int var_8 = 1155787703;
int zero = 0;
unsigned long long int var_10 = 3238828116383523292ULL;
unsigned int var_11 = 3893718141U;
int var_12 = -807904351;
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
