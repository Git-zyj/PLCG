#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11528254687734010740ULL;
long long int var_2 = 6494959562539471753LL;
unsigned char var_3 = (unsigned char)205;
short var_4 = (short)14872;
signed char var_5 = (signed char)66;
long long int var_6 = 7713416471420884070LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 1208360003112816544ULL;
unsigned int var_9 = 1716310990U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)147;
unsigned short var_13 = (unsigned short)33574;
void init() {
}

void checksum() {
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
