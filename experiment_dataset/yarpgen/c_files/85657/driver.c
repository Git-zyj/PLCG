#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25573;
unsigned short var_6 = (unsigned short)30009;
unsigned long long int var_10 = 11926978933897095407ULL;
unsigned short var_18 = (unsigned short)52809;
int zero = 0;
int var_19 = -474624691;
signed char var_20 = (signed char)35;
unsigned int var_21 = 265299164U;
unsigned int var_22 = 3544676732U;
short var_23 = (short)-2149;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
