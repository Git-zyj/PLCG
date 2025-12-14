#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9680;
unsigned long long int var_4 = 10918755223335200386ULL;
int var_6 = 1738433153;
unsigned long long int var_8 = 5794518302663094389ULL;
signed char var_11 = (signed char)-91;
unsigned long long int var_14 = 14133659280349198260ULL;
int zero = 0;
unsigned long long int var_15 = 13850097662299822262ULL;
signed char var_16 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
