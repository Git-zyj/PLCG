#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 811862709;
int var_12 = 1522725799;
short var_17 = (short)7251;
int zero = 0;
unsigned long long int var_19 = 7161147339372822658ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2766103950U;
_Bool var_22 = (_Bool)1;
long long int var_23 = 3485790986349474825LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
