#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1474687251;
_Bool var_1 = (_Bool)1;
long long int var_2 = -2457944159859737880LL;
int var_3 = -1293721898;
unsigned char var_5 = (unsigned char)72;
long long int var_7 = -2973327285565962704LL;
int zero = 0;
unsigned char var_10 = (unsigned char)179;
int var_11 = 1864982766;
int var_12 = 1381309171;
unsigned short var_13 = (unsigned short)6374;
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
