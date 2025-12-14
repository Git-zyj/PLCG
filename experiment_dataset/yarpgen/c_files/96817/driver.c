#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
unsigned char var_1 = (unsigned char)119;
signed char var_4 = (signed char)9;
short var_7 = (short)29902;
short var_8 = (short)-13374;
signed char var_11 = (signed char)-88;
unsigned long long int var_12 = 17392450656247203256ULL;
signed char var_18 = (signed char)54;
int zero = 0;
unsigned char var_19 = (unsigned char)99;
unsigned char var_20 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
