#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17780;
short var_2 = (short)-14974;
signed char var_9 = (signed char)119;
unsigned short var_10 = (unsigned short)14328;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)65398;
int zero = 0;
int var_15 = 773708531;
unsigned long long int var_16 = 16789622852373846991ULL;
signed char var_17 = (signed char)42;
short var_18 = (short)19106;
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
