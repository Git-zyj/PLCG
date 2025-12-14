#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
unsigned short var_4 = (unsigned short)736;
unsigned char var_6 = (unsigned char)128;
unsigned short var_7 = (unsigned short)11652;
long long int var_10 = 8229280970669000728LL;
int zero = 0;
long long int var_12 = -4175081510151861134LL;
long long int var_13 = -1414796379739327925LL;
long long int var_14 = 8727066951431673338LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
