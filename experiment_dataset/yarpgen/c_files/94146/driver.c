#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)13;
unsigned long long int var_3 = 15467488004528292649ULL;
int var_6 = -1578419237;
unsigned long long int var_12 = 3443971704825696849ULL;
unsigned short var_14 = (unsigned short)29964;
unsigned long long int var_19 = 802824298568718402ULL;
int zero = 0;
unsigned long long int var_20 = 11847211014140102399ULL;
signed char var_21 = (signed char)-24;
signed char var_22 = (signed char)55;
short var_23 = (short)7140;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
