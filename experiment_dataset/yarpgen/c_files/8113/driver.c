#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8356450510716878200LL;
unsigned long long int var_6 = 11127199594297603539ULL;
long long int var_7 = 2540853901179056529LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 1136694997089597945ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)15565;
int var_21 = 1377659947;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
