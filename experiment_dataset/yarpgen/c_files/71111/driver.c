#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1962632021U;
int var_3 = -195951746;
unsigned short var_7 = (unsigned short)12099;
long long int var_9 = -7926663965751740597LL;
int zero = 0;
short var_20 = (short)-5567;
long long int var_21 = 4599491033554752773LL;
unsigned char var_22 = (unsigned char)217;
unsigned char var_23 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
