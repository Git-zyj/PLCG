#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7663303582857641971LL;
signed char var_7 = (signed char)127;
signed char var_8 = (signed char)8;
long long int var_11 = -3150867031223087459LL;
int zero = 0;
unsigned long long int var_20 = 16542701480853164677ULL;
signed char var_21 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
