#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1621674547303576584ULL;
unsigned long long int var_3 = 16614332973671755027ULL;
unsigned long long int var_12 = 5111058169434869621ULL;
short var_14 = (short)-8044;
signed char var_15 = (signed char)7;
int zero = 0;
unsigned long long int var_18 = 12628436772514254621ULL;
unsigned long long int var_19 = 11413627081893974744ULL;
short var_20 = (short)-30073;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
