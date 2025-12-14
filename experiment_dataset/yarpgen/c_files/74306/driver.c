#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)238;
unsigned long long int var_10 = 6235705414411986842ULL;
unsigned int var_13 = 3719400178U;
_Bool var_16 = (_Bool)0;
unsigned char var_18 = (unsigned char)80;
int zero = 0;
signed char var_19 = (signed char)11;
_Bool var_20 = (_Bool)1;
short var_21 = (short)29798;
int var_22 = -1418753817;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
