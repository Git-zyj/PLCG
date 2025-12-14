#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
signed char var_3 = (signed char)-55;
signed char var_4 = (signed char)0;
short var_7 = (short)6327;
unsigned char var_8 = (unsigned char)4;
short var_10 = (short)-5660;
int zero = 0;
unsigned int var_11 = 2244894807U;
unsigned long long int var_12 = 13508582676718171946ULL;
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
