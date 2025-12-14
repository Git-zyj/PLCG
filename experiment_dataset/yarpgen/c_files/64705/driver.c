#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)99;
short var_4 = (short)-24970;
int zero = 0;
short var_11 = (short)17288;
unsigned long long int var_12 = 825611428946011488ULL;
int var_13 = 42680533;
unsigned char var_14 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
