#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 492268345240206733ULL;
int var_16 = -1809459970;
short var_17 = (short)9822;
int zero = 0;
long long int var_20 = -1564587688967174460LL;
int var_21 = 1738263524;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)141;
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
