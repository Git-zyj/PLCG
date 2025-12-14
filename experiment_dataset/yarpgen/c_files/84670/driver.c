#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6517030295643345918LL;
long long int var_5 = -2209120561438022237LL;
int zero = 0;
unsigned long long int var_10 = 4338644377179976431ULL;
unsigned long long int var_11 = 16670595318708739252ULL;
unsigned long long int var_12 = 10696318229419875012ULL;
unsigned char var_13 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
