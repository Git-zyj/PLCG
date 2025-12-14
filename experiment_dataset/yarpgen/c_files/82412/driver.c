#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1111691617;
long long int var_3 = -7428801129270926822LL;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 1307392506U;
unsigned long long int var_12 = 6691738807877541144ULL;
unsigned int var_13 = 3217500192U;
int var_14 = -2010803225;
int zero = 0;
unsigned int var_16 = 472867847U;
long long int var_17 = 4276288322854478365LL;
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
