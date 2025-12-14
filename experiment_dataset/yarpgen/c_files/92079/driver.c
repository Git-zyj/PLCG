#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)111;
short var_7 = (short)21740;
unsigned long long int var_17 = 18408136597934235102ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 549124170;
unsigned short var_20 = (unsigned short)62054;
void init() {
}

void checksum() {
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
