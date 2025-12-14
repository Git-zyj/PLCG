#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13401778775284887667ULL;
unsigned int var_4 = 1796644341U;
long long int var_6 = -6828930902420354928LL;
signed char var_7 = (signed char)-83;
short var_10 = (short)4636;
short var_12 = (short)8861;
int zero = 0;
unsigned char var_13 = (unsigned char)239;
unsigned char var_14 = (unsigned char)220;
unsigned char var_15 = (unsigned char)41;
void init() {
}

void checksum() {
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
