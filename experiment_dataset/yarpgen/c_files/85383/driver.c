#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7432920162428752313ULL;
short var_3 = (short)30072;
short var_8 = (short)-23618;
int var_10 = 1271425491;
unsigned short var_12 = (unsigned short)60911;
signed char var_14 = (signed char)-79;
int zero = 0;
unsigned int var_15 = 2863612279U;
signed char var_16 = (signed char)71;
unsigned short var_17 = (unsigned short)15794;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
