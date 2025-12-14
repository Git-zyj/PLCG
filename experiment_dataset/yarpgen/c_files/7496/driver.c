#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13230;
_Bool var_3 = (_Bool)0;
unsigned long long int var_8 = 4420042292816006444ULL;
long long int var_10 = 5529981507334540025LL;
unsigned long long int var_14 = 7816347548928719772ULL;
int zero = 0;
short var_16 = (short)13348;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
