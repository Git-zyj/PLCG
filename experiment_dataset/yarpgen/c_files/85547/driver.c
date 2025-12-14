#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2334892794U;
unsigned int var_2 = 3666911567U;
unsigned long long int var_4 = 3513264057294643641ULL;
int var_6 = 189182098;
unsigned short var_9 = (unsigned short)62840;
int zero = 0;
long long int var_10 = -7133837618396113592LL;
signed char var_11 = (signed char)91;
int var_12 = 2131370778;
short var_13 = (short)24791;
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
