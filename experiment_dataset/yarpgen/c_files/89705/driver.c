#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)37242;
unsigned long long int var_9 = 10566492793993126381ULL;
signed char var_10 = (signed char)-100;
unsigned char var_13 = (unsigned char)1;
unsigned long long int var_14 = 8114735720964046025ULL;
int var_15 = 1709058474;
unsigned long long int var_19 = 14136299753834535092ULL;
int zero = 0;
long long int var_20 = -573669778163924864LL;
unsigned long long int var_21 = 1047159091975874980ULL;
void init() {
}

void checksum() {
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
