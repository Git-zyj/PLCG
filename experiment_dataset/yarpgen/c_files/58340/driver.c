#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40626;
int var_3 = 1954490708;
_Bool var_7 = (_Bool)0;
long long int var_13 = -1298095879865389386LL;
long long int var_14 = 7181721885796105399LL;
unsigned long long int var_15 = 4698593669268006692ULL;
unsigned long long int var_16 = 12665981665869893740ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_19 = (unsigned short)196;
int zero = 0;
unsigned short var_20 = (unsigned short)53836;
int var_21 = 1523382630;
signed char var_22 = (signed char)-28;
unsigned short var_23 = (unsigned short)14994;
int var_24 = 1361596008;
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
