#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5371223802347083184ULL;
unsigned char var_3 = (unsigned char)48;
unsigned char var_6 = (unsigned char)31;
short var_8 = (short)4338;
unsigned char var_10 = (unsigned char)130;
unsigned char var_14 = (unsigned char)144;
signed char var_15 = (signed char)-42;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7874912895039146875LL;
int zero = 0;
unsigned long long int var_19 = 876311580778144113ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)30725;
void init() {
}

void checksum() {
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
