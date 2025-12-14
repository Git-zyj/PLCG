#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10917;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)30;
unsigned char var_3 = (unsigned char)234;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1094557546U;
int zero = 0;
unsigned short var_10 = (unsigned short)40802;
short var_11 = (short)12774;
int var_12 = -922559795;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
