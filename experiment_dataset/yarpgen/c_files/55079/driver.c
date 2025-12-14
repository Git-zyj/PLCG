#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8898859567043851370LL;
unsigned short var_1 = (unsigned short)11893;
unsigned long long int var_3 = 3340031376496854846ULL;
int var_5 = -542740530;
unsigned long long int var_7 = 3333333886853559166ULL;
int var_12 = 791121392;
long long int var_15 = -2991116109589849515LL;
int zero = 0;
unsigned char var_18 = (unsigned char)252;
unsigned long long int var_19 = 3151771915596965985ULL;
unsigned short var_20 = (unsigned short)38079;
unsigned int var_21 = 350048177U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
