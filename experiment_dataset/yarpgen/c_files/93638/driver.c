#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)56;
unsigned long long int var_4 = 14734996493522247182ULL;
unsigned int var_7 = 2662564229U;
unsigned short var_8 = (unsigned short)38445;
int zero = 0;
unsigned int var_17 = 1931853112U;
unsigned long long int var_18 = 9191315289853536980ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2080348190U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
