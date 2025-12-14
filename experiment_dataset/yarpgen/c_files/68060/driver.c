#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17356130307586329793ULL;
signed char var_3 = (signed char)-48;
unsigned long long int var_8 = 2375773606970161325ULL;
signed char var_11 = (signed char)65;
short var_13 = (short)-24210;
short var_15 = (short)-1169;
int zero = 0;
short var_17 = (short)30355;
_Bool var_18 = (_Bool)1;
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
