#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3950661419U;
unsigned int var_2 = 1009745037U;
unsigned long long int var_5 = 6140808057132217014ULL;
long long int var_8 = 5080093242150386571LL;
short var_10 = (short)-23282;
short var_12 = (short)26205;
int zero = 0;
int var_13 = -1498688506;
unsigned int var_14 = 1258713318U;
unsigned long long int var_15 = 12671376781921875576ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
