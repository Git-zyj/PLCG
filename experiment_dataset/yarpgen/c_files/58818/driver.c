#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5041;
unsigned long long int var_9 = 13332702763709123541ULL;
_Bool var_11 = (_Bool)1;
int var_12 = -488061237;
short var_15 = (short)13994;
int zero = 0;
short var_19 = (short)17524;
unsigned short var_20 = (unsigned short)58720;
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
