#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
short var_2 = (short)10116;
long long int var_5 = 4506784009203164303LL;
long long int var_7 = -1660208560043210929LL;
_Bool var_12 = (_Bool)1;
unsigned int var_17 = 3515104441U;
int zero = 0;
long long int var_20 = 6384172762320369161LL;
long long int var_21 = -8421946010937499493LL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
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
