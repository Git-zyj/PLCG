#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
unsigned char var_1 = (unsigned char)218;
short var_2 = (short)5213;
signed char var_4 = (signed char)35;
short var_5 = (short)20091;
long long int var_7 = -4730678909393112297LL;
int var_8 = -317133784;
long long int var_10 = -8766746499225665017LL;
short var_11 = (short)19379;
int zero = 0;
signed char var_12 = (signed char)-89;
int var_13 = -2142473760;
int var_14 = 418572556;
signed char var_15 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
