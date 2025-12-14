#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7295479519262157729LL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-5480;
int var_4 = -1228074312;
long long int var_11 = 7237346444056259593LL;
unsigned short var_12 = (unsigned short)11650;
int zero = 0;
long long int var_20 = 1858563004636261587LL;
unsigned char var_21 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
