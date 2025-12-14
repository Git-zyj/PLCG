#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_8 = 3711920444066406305LL;
unsigned long long int var_10 = 12855545432362375553ULL;
signed char var_14 = (signed char)-33;
int zero = 0;
unsigned short var_16 = (unsigned short)34672;
long long int var_17 = 5450722372386399416LL;
long long int var_18 = -730092242287402926LL;
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
