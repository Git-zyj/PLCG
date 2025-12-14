#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 6755412158725156620ULL;
unsigned short var_7 = (unsigned short)37934;
int var_8 = -2123043692;
unsigned long long int var_10 = 1102543189378207374ULL;
signed char var_11 = (signed char)-16;
unsigned long long int var_13 = 10648488434435699453ULL;
int var_14 = 1737728641;
long long int var_15 = -6446033394797465998LL;
unsigned short var_16 = (unsigned short)2237;
unsigned long long int var_17 = 4148611224711041645ULL;
int zero = 0;
int var_19 = 914147344;
int var_20 = 1587650682;
void init() {
}

void checksum() {
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
