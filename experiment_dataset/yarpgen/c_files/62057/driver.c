#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)60734;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 1427370162989168164ULL;
int zero = 0;
int var_14 = -1798874671;
signed char var_15 = (signed char)86;
long long int var_16 = 1732487978513733224LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
