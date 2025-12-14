#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5757704870651221714ULL;
long long int var_1 = 7294431681364619874LL;
_Bool var_7 = (_Bool)1;
long long int var_11 = -3566898618618172237LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)71;
unsigned long long int var_16 = 7189249901852960587ULL;
void init() {
}

void checksum() {
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
