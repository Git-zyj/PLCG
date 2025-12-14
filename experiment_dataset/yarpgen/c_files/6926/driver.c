#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 12885093251261099983ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int var_13 = -804470058;
unsigned short var_14 = (unsigned short)55478;
short var_15 = (short)27976;
long long int var_16 = -4897536667892901636LL;
unsigned int var_17 = 2448765072U;
_Bool var_18 = (_Bool)1;
long long int var_19 = 7144595149726984973LL;
int zero = 0;
int var_20 = -620624499;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)54;
signed char var_23 = (signed char)39;
long long int var_24 = 8200341218913815627LL;
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
