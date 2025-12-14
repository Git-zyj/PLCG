#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7414085589169879662LL;
unsigned short var_1 = (unsigned short)63809;
unsigned int var_2 = 2183721688U;
unsigned short var_3 = (unsigned short)45357;
long long int var_4 = 3931056228162211894LL;
long long int var_5 = -9089187833485910686LL;
unsigned int var_6 = 1578089034U;
unsigned int var_8 = 1791859640U;
unsigned short var_10 = (unsigned short)36629;
unsigned short var_11 = (unsigned short)44471;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)43360;
long long int var_14 = 8997220510477918303LL;
unsigned long long int var_15 = 7189010332111635536ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2183243061U;
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
