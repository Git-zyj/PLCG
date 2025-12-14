#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)92;
unsigned char var_3 = (unsigned char)16;
unsigned long long int var_4 = 2100142982016410778ULL;
short var_8 = (short)24142;
unsigned int var_9 = 3937258280U;
unsigned char var_10 = (unsigned char)156;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-3;
int zero = 0;
long long int var_18 = -8245312354776832811LL;
int var_19 = -120870642;
signed char var_20 = (signed char)88;
void init() {
}

void checksum() {
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
