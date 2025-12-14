#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2051855492;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-16;
signed char var_7 = (signed char)-39;
signed char var_8 = (signed char)73;
long long int var_9 = 6849777916653721930LL;
int var_10 = -2078027542;
unsigned short var_13 = (unsigned short)47012;
unsigned int var_15 = 2537801233U;
int zero = 0;
unsigned int var_17 = 2484020421U;
long long int var_18 = 8478254449888254343LL;
unsigned int var_19 = 533478143U;
unsigned long long int var_20 = 15843125830403014405ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
