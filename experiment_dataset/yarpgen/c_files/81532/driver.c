#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12942;
signed char var_3 = (signed char)73;
unsigned short var_5 = (unsigned short)11562;
short var_8 = (short)-16065;
unsigned long long int var_10 = 5871801005603955403ULL;
int var_11 = -1747638622;
short var_12 = (short)-29509;
int zero = 0;
long long int var_14 = -5682876250849312377LL;
long long int var_15 = -8243226651276266525LL;
signed char var_16 = (signed char)55;
signed char var_17 = (signed char)83;
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
