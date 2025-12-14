#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)25054;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)41906;
unsigned int var_11 = 3756461145U;
unsigned int var_12 = 3538698001U;
int zero = 0;
unsigned int var_13 = 83590527U;
_Bool var_14 = (_Bool)0;
long long int var_15 = -992007284826257376LL;
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
