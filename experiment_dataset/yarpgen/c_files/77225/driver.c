#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)87;
short var_12 = (short)2250;
unsigned short var_16 = (unsigned short)53396;
unsigned char var_18 = (unsigned char)34;
int zero = 0;
long long int var_20 = 2781170365078065263LL;
int var_21 = 117525057;
long long int var_22 = -4464634742693531038LL;
void init() {
}

void checksum() {
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
