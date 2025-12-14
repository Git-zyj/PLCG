#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 1538711776;
unsigned int var_5 = 1858349300U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)179;
unsigned short var_10 = (unsigned short)3277;
long long int var_13 = -3591778162544685806LL;
int zero = 0;
short var_15 = (short)5264;
signed char var_16 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
