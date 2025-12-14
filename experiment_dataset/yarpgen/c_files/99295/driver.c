#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2548669331U;
int var_3 = -523218540;
short var_6 = (short)-31417;
unsigned char var_7 = (unsigned char)181;
int var_9 = -366777482;
signed char var_10 = (signed char)-6;
int var_12 = 2007114867;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)147;
unsigned char var_16 = (unsigned char)52;
int zero = 0;
unsigned char var_17 = (unsigned char)125;
unsigned int var_18 = 1528958432U;
int var_19 = -269780827;
unsigned long long int var_20 = 4684558017321884295ULL;
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
