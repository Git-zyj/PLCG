#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23829;
signed char var_3 = (signed char)126;
signed char var_4 = (signed char)-64;
signed char var_7 = (signed char)-6;
unsigned short var_10 = (unsigned short)3786;
long long int var_11 = -1170490230987555998LL;
signed char var_12 = (signed char)-40;
long long int var_13 = 171454094456923662LL;
_Bool var_14 = (_Bool)1;
long long int var_18 = -5489242790043854987LL;
int zero = 0;
int var_19 = -2071514987;
signed char var_20 = (signed char)-71;
long long int var_21 = -3985389382607835982LL;
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
