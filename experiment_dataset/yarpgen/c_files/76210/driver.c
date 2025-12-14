#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-36;
unsigned short var_8 = (unsigned short)61293;
long long int var_10 = -4663525779037372990LL;
unsigned int var_11 = 2232783100U;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-18114;
unsigned long long int var_16 = 5707324552662012909ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
