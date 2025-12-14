#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = 5779190938949878243LL;
long long int var_21 = -8817440494790550767LL;
short var_22 = (short)18128;
unsigned int var_23 = 1887322161U;
void init() {
}

void checksum() {
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
