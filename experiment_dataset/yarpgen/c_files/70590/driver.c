#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
int var_1 = 1816644666;
signed char var_2 = (signed char)87;
signed char var_3 = (signed char)2;
signed char var_4 = (signed char)-88;
signed char var_5 = (signed char)112;
signed char var_6 = (signed char)34;
signed char var_8 = (signed char)-104;
int var_10 = 92191075;
int zero = 0;
int var_11 = 2063610840;
signed char var_12 = (signed char)103;
signed char var_13 = (signed char)44;
signed char var_14 = (signed char)65;
int var_15 = -1296444552;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
