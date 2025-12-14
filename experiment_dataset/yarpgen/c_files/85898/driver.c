#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned int var_1 = 3890523533U;
unsigned short var_4 = (unsigned short)24598;
unsigned short var_5 = (unsigned short)55159;
long long int var_6 = -6855488413323482598LL;
short var_11 = (short)-29654;
int var_12 = 1113761568;
int zero = 0;
unsigned long long int var_14 = 7300076952518203966ULL;
int var_15 = -60211210;
int var_16 = 675281622;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
