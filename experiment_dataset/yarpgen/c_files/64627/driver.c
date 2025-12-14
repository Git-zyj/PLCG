#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -8944981086922898375LL;
long long int var_8 = 2984531075963097581LL;
long long int var_14 = 5224172215941554791LL;
unsigned int var_15 = 664555986U;
unsigned int var_16 = 3508195901U;
int zero = 0;
short var_17 = (short)31958;
_Bool var_18 = (_Bool)0;
int var_19 = 62519407;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
