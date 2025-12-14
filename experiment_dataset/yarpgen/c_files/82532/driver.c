#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)27162;
long long int var_3 = -401448605042176604LL;
short var_4 = (short)-31334;
_Bool var_16 = (_Bool)0;
unsigned short var_18 = (unsigned short)12470;
int zero = 0;
int var_20 = -1947560570;
_Bool var_21 = (_Bool)0;
long long int var_22 = 2343985402320716569LL;
void init() {
}

void checksum() {
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
