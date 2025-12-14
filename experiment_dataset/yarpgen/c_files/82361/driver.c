#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39849;
unsigned long long int var_2 = 2346710622994958586ULL;
unsigned long long int var_4 = 14683939500340065841ULL;
unsigned short var_11 = (unsigned short)21885;
int zero = 0;
unsigned short var_12 = (unsigned short)45293;
unsigned long long int var_13 = 4785083255849769060ULL;
void init() {
}

void checksum() {
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
