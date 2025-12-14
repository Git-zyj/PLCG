#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2183601412669017784LL;
short var_6 = (short)32294;
long long int var_8 = -5154797334009770376LL;
unsigned char var_9 = (unsigned char)157;
long long int var_10 = -2021249614767089394LL;
unsigned char var_11 = (unsigned char)69;
signed char var_13 = (signed char)-92;
int zero = 0;
unsigned int var_15 = 3157629011U;
unsigned short var_16 = (unsigned short)8802;
signed char var_17 = (signed char)-13;
void init() {
}

void checksum() {
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
