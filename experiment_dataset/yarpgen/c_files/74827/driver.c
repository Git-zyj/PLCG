#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58672;
unsigned int var_5 = 1345831025U;
unsigned short var_9 = (unsigned short)29332;
unsigned int var_11 = 2346423785U;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_18 = (short)-17157;
unsigned int var_19 = 3843507673U;
signed char var_20 = (signed char)20;
long long int var_21 = -8994672036643595805LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
