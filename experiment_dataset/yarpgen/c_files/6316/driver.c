#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -331428247;
int var_8 = 1502686771;
signed char var_12 = (signed char)-58;
unsigned char var_15 = (unsigned char)89;
unsigned long long int var_17 = 16382975154559943529ULL;
unsigned char var_18 = (unsigned char)240;
int zero = 0;
long long int var_20 = 1791029444537180863LL;
int var_21 = 1904185355;
unsigned long long int var_22 = 13417216432582436255ULL;
_Bool var_23 = (_Bool)0;
int var_24 = -1064287121;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
