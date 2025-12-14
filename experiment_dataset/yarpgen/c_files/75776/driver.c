#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 5481239546261243980LL;
unsigned short var_4 = (unsigned short)38066;
unsigned short var_6 = (unsigned short)15147;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)23196;
int zero = 0;
long long int var_14 = 3873326355671949893LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
