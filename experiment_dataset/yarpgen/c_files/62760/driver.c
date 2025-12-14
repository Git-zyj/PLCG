#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8692784236772943991LL;
long long int var_12 = -4719197627299176574LL;
short var_13 = (short)24786;
long long int var_14 = 662538126331957780LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-73;
unsigned short var_17 = (unsigned short)16378;
unsigned long long int var_18 = 14683829212000808954ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
