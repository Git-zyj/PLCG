#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-17;
signed char var_7 = (signed char)32;
short var_10 = (short)12817;
unsigned char var_13 = (unsigned char)21;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 8818944339310426636ULL;
_Bool var_19 = (_Bool)0;
int var_20 = 962648563;
long long int var_21 = 8905877784099732213LL;
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
