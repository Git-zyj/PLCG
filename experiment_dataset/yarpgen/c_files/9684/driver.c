#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)10780;
short var_4 = (short)10929;
long long int var_8 = -2862857791740807016LL;
signed char var_11 = (signed char)-58;
int zero = 0;
unsigned short var_17 = (unsigned short)7315;
unsigned long long int var_18 = 16699650439094332612ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
