#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7146;
signed char var_1 = (signed char)-21;
_Bool var_2 = (_Bool)1;
int var_3 = -13521489;
int var_5 = -570866913;
short var_6 = (short)-16925;
short var_7 = (short)-20819;
int zero = 0;
int var_10 = 344261038;
long long int var_11 = 553408227983824166LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
