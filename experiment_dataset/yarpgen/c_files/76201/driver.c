#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60153;
int var_4 = -902076527;
unsigned int var_6 = 3418622985U;
long long int var_7 = -7024894628554512391LL;
long long int var_9 = 8188216324640571502LL;
unsigned long long int var_11 = 13725912998872945664ULL;
unsigned char var_13 = (unsigned char)48;
unsigned char var_14 = (unsigned char)0;
unsigned char var_15 = (unsigned char)113;
unsigned long long int var_17 = 4150704837931752769ULL;
int zero = 0;
unsigned long long int var_19 = 15089236036852566662ULL;
unsigned int var_20 = 413037280U;
signed char var_21 = (signed char)71;
unsigned long long int var_22 = 4930238125550763390ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
