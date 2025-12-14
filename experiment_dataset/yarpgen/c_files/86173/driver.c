#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2063032913;
long long int var_1 = 4110415930516341246LL;
short var_2 = (short)11054;
signed char var_5 = (signed char)31;
signed char var_6 = (signed char)-17;
_Bool var_9 = (_Bool)1;
short var_10 = (short)15332;
unsigned long long int var_13 = 4182535421830259990ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)14;
void init() {
}

void checksum() {
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
