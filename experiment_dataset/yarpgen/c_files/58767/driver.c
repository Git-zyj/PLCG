#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)110;
signed char var_5 = (signed char)-113;
unsigned short var_10 = (unsigned short)10507;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
long long int var_15 = -4325212482785221497LL;
int zero = 0;
unsigned char var_16 = (unsigned char)43;
unsigned char var_17 = (unsigned char)232;
signed char var_18 = (signed char)-126;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
