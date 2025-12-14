#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 611271516U;
unsigned long long int var_2 = 3033960494863018189ULL;
signed char var_3 = (signed char)54;
long long int var_5 = 8889432593547045898LL;
unsigned long long int var_7 = 16514800882451204984ULL;
unsigned int var_9 = 3811844827U;
int zero = 0;
unsigned int var_10 = 1620009535U;
int var_11 = 672737869;
_Bool var_12 = (_Bool)0;
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
