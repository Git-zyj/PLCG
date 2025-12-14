#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)58;
int var_4 = -549637;
_Bool var_7 = (_Bool)0;
long long int var_10 = -5057142365472523863LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 16187785367263456133ULL;
unsigned short var_15 = (unsigned short)7814;
int zero = 0;
long long int var_16 = -4352279637707538177LL;
unsigned int var_17 = 1221386205U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
