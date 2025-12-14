#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4271475688282780195LL;
int zero = 0;
short var_18 = (short)-19798;
short var_19 = (short)-24920;
unsigned short var_20 = (unsigned short)33870;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 17349683969191197736ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
