#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26223;
int var_2 = 1886951395;
short var_5 = (short)3934;
unsigned long long int var_7 = 13242913026446772413ULL;
short var_8 = (short)-28298;
int zero = 0;
signed char var_10 = (signed char)-118;
signed char var_11 = (signed char)110;
short var_12 = (short)21701;
unsigned long long int var_13 = 321444129896438598ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
