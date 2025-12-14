#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 462544832U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 2770604026037115055ULL;
int var_13 = 1575838899;
int zero = 0;
unsigned short var_16 = (unsigned short)8670;
_Bool var_17 = (_Bool)0;
long long int var_18 = -375478911371747351LL;
unsigned long long int var_19 = 14509640860491329355ULL;
int var_20 = -162268391;
int var_21 = 443182834;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
