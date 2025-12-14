#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
unsigned int var_1 = 830613211U;
unsigned long long int var_3 = 11871931593562833713ULL;
long long int var_5 = 6949772222120587012LL;
unsigned long long int var_6 = 56813392895732004ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3238329053U;
unsigned short var_12 = (unsigned short)28165;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)43449;
signed char var_15 = (signed char)-104;
int zero = 0;
unsigned short var_17 = (unsigned short)60958;
int var_18 = -2088792762;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)15040;
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
