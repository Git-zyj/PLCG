#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9634606818481037900ULL;
signed char var_4 = (signed char)71;
long long int var_5 = -1381499194011944519LL;
signed char var_6 = (signed char)-113;
signed char var_7 = (signed char)-84;
unsigned short var_8 = (unsigned short)4859;
int zero = 0;
long long int var_10 = -1487371031053733455LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = -3129959100512146441LL;
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
