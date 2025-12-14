#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = -5755445711527623156LL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)49816;
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
