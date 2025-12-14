#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30185;
_Bool var_2 = (_Bool)1;
int var_6 = 1158419214;
unsigned long long int var_11 = 8256726788211548389ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)32223;
int zero = 0;
signed char var_14 = (signed char)35;
int var_15 = -176334050;
signed char var_16 = (signed char)-112;
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
