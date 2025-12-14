#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
unsigned long long int var_10 = 3124075996665599233ULL;
unsigned char var_11 = (unsigned char)20;
long long int var_12 = -3926672557513924496LL;
_Bool var_14 = (_Bool)0;
unsigned char var_17 = (unsigned char)165;
int zero = 0;
unsigned int var_20 = 644484006U;
signed char var_21 = (signed char)-40;
unsigned short var_22 = (unsigned short)27311;
unsigned short var_23 = (unsigned short)13950;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
