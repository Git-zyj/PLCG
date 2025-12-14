#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)0;
short var_16 = (short)27533;
_Bool var_17 = (_Bool)0;
short var_18 = (short)25099;
int zero = 0;
unsigned short var_20 = (unsigned short)30788;
unsigned short var_21 = (unsigned short)34198;
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
