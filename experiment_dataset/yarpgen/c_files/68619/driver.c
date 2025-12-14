#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14589;
unsigned int var_1 = 1313976537U;
unsigned short var_2 = (unsigned short)62748;
signed char var_8 = (signed char)-88;
int zero = 0;
long long int var_13 = 7391015429937169999LL;
short var_14 = (short)4504;
unsigned short var_15 = (unsigned short)62570;
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
