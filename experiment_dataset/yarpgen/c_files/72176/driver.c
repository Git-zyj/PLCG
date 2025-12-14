#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
short var_2 = (short)-20870;
unsigned char var_4 = (unsigned char)87;
long long int var_5 = 2100467514092853498LL;
int var_7 = -417236880;
int var_11 = -2138751391;
int zero = 0;
int var_15 = 1927903918;
unsigned short var_16 = (unsigned short)29867;
unsigned int var_17 = 2263968333U;
int var_18 = 1490646610;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
