#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -281126566;
unsigned long long int var_3 = 16188393701986554269ULL;
_Bool var_7 = (_Bool)1;
int zero = 0;
short var_13 = (short)-8989;
signed char var_14 = (signed char)-97;
long long int var_15 = 1949265749888900463LL;
void init() {
}

void checksum() {
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
