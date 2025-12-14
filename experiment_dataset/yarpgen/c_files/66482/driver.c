#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16607912889567451740ULL;
unsigned long long int var_3 = 1913678945374790956ULL;
unsigned int var_10 = 1068896504U;
int var_11 = 1327734422;
unsigned long long int var_12 = 7547464730555230034ULL;
long long int var_15 = -3351105176883178898LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 10598080085334089514ULL;
unsigned long long int var_19 = 3168396779376141625ULL;
unsigned short var_20 = (unsigned short)615;
unsigned short var_21 = (unsigned short)46556;
void init() {
}

void checksum() {
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
