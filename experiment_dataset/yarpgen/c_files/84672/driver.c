#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 424877165;
unsigned short var_4 = (unsigned short)56680;
int var_7 = 1997622848;
signed char var_8 = (signed char)-113;
int var_10 = 2037757062;
int var_12 = 1083807402;
int zero = 0;
signed char var_17 = (signed char)-31;
long long int var_18 = 3109818253854408435LL;
unsigned short var_19 = (unsigned short)30777;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
