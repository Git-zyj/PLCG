#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8879397326108302689LL;
signed char var_10 = (signed char)26;
signed char var_14 = (signed char)46;
short var_17 = (short)-1231;
int zero = 0;
unsigned long long int var_18 = 1331445870957030265ULL;
short var_19 = (short)-30993;
short var_20 = (short)27262;
unsigned long long int var_21 = 13303633958476487208ULL;
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
