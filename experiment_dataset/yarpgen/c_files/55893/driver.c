#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1555799233U;
unsigned long long int var_6 = 3984862530419117361ULL;
short var_8 = (short)917;
signed char var_12 = (signed char)45;
int zero = 0;
int var_20 = -681872586;
unsigned char var_21 = (unsigned char)43;
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
