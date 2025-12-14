#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6653;
signed char var_3 = (signed char)93;
int var_5 = -1944299854;
_Bool var_7 = (_Bool)1;
long long int var_8 = -378975179380253844LL;
unsigned int var_11 = 511448109U;
int zero = 0;
short var_12 = (short)859;
unsigned int var_13 = 2674132756U;
signed char var_14 = (signed char)-38;
void init() {
}

void checksum() {
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
