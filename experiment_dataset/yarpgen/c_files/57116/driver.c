#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-73;
long long int var_6 = -6129827687573912991LL;
int zero = 0;
long long int var_18 = -3588979763971688373LL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -6672434249177918109LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
