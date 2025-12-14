#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3453200537563819481LL;
unsigned char var_1 = (unsigned char)232;
unsigned char var_5 = (unsigned char)184;
int var_6 = -714698916;
_Bool var_9 = (_Bool)0;
int var_10 = 1090416311;
unsigned char var_11 = (unsigned char)1;
short var_13 = (short)-25491;
short var_17 = (short)-7275;
long long int var_18 = -5884299048131861361LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = -8283308638306558779LL;
int var_21 = -746052860;
signed char var_22 = (signed char)89;
unsigned long long int var_23 = 16042848292906960081ULL;
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
