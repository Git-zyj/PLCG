#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1818732258U;
short var_2 = (short)-14042;
unsigned int var_4 = 480601708U;
short var_6 = (short)-10758;
unsigned char var_8 = (unsigned char)89;
unsigned int var_9 = 4172023531U;
unsigned int var_10 = 2379051086U;
unsigned long long int var_12 = 399134881060376630ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 12658937659167814785ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)44554;
long long int var_17 = -1487271236321043850LL;
unsigned long long int var_18 = 1828522257910086205ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
