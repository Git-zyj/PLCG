#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
long long int var_1 = 8483117947816507428LL;
unsigned short var_3 = (unsigned short)30282;
unsigned short var_4 = (unsigned short)34594;
short var_5 = (short)4294;
_Bool var_7 = (_Bool)0;
short var_10 = (short)4676;
long long int var_11 = -6958153622727860997LL;
int zero = 0;
signed char var_13 = (signed char)-85;
long long int var_14 = -2779564499714788723LL;
short var_15 = (short)-1736;
signed char var_16 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
