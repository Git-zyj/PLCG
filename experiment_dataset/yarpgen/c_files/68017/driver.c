#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1491790968U;
unsigned int var_1 = 2895434299U;
_Bool var_2 = (_Bool)1;
long long int var_4 = -8062871561062995977LL;
unsigned short var_7 = (unsigned short)21945;
int zero = 0;
unsigned char var_12 = (unsigned char)128;
unsigned long long int var_13 = 10674289946812992347ULL;
long long int var_14 = -6423825527042322786LL;
unsigned int var_15 = 2634798696U;
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
