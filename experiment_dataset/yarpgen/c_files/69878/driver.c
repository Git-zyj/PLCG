#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_6 = 6386113408650306633ULL;
long long int var_11 = 8241963514901308444LL;
long long int var_13 = 7868199767589891218LL;
unsigned short var_15 = (unsigned short)16615;
int zero = 0;
signed char var_16 = (signed char)56;
long long int var_17 = 8197502399732595029LL;
unsigned long long int var_18 = 18090723877766067608ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
