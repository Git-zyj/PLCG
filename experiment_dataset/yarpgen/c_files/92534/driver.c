#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)107;
unsigned char var_1 = (unsigned char)5;
unsigned int var_4 = 174844643U;
short var_5 = (short)6480;
signed char var_6 = (signed char)21;
unsigned int var_10 = 3865578755U;
long long int var_11 = 8607576771367236475LL;
unsigned char var_12 = (unsigned char)182;
unsigned char var_13 = (unsigned char)241;
int var_15 = 1135531078;
int zero = 0;
unsigned int var_18 = 3965527068U;
long long int var_19 = 3066804441575117824LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
