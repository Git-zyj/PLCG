#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7162871137008614708ULL;
signed char var_2 = (signed char)89;
unsigned long long int var_7 = 7923180910332797312ULL;
unsigned char var_8 = (unsigned char)70;
unsigned short var_10 = (unsigned short)5604;
unsigned long long int var_11 = 15314150662346994860ULL;
unsigned short var_13 = (unsigned short)47300;
int zero = 0;
unsigned short var_18 = (unsigned short)13323;
unsigned long long int var_19 = 8265127762741401034ULL;
unsigned short var_20 = (unsigned short)30563;
unsigned int var_21 = 3972151026U;
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
