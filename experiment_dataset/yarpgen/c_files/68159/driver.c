#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3728910079U;
_Bool var_3 = (_Bool)1;
long long int var_4 = 1330406762086846833LL;
unsigned long long int var_5 = 10228657998699440778ULL;
unsigned int var_6 = 4238919289U;
unsigned short var_7 = (unsigned short)47216;
unsigned long long int var_8 = 13271298302372220798ULL;
unsigned short var_9 = (unsigned short)52505;
unsigned short var_10 = (unsigned short)18866;
unsigned int var_11 = 1888606893U;
int var_12 = 1807421808;
unsigned long long int var_13 = 11178886573512002976ULL;
unsigned long long int var_14 = 2182078145583986333ULL;
unsigned int var_15 = 1258376345U;
long long int var_16 = -7855561025755961287LL;
unsigned short var_17 = (unsigned short)16987;
long long int var_19 = 7013313000407262990LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 605130524726040293LL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)6;
long long int var_24 = -5640893788333004094LL;
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
