#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_6 = 7576154321461590302LL;
unsigned char var_7 = (unsigned char)181;
long long int var_8 = -8159634180349398033LL;
unsigned short var_11 = (unsigned short)31449;
int zero = 0;
long long int var_12 = -2353717792561502987LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-89;
signed char var_15 = (signed char)22;
unsigned char var_16 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
