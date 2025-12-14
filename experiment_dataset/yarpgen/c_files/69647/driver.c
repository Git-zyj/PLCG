#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45242;
short var_2 = (short)-15027;
unsigned long long int var_5 = 11039551561815799085ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 79034077599728136ULL;
short var_11 = (short)25309;
int zero = 0;
unsigned short var_13 = (unsigned short)39573;
unsigned short var_14 = (unsigned short)55256;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
