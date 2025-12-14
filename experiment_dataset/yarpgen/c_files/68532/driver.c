#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_7 = 1827643523;
unsigned long long int var_11 = 4714773287479876234ULL;
unsigned long long int var_12 = 2454639447758641677ULL;
unsigned long long int var_14 = 1711483260732158998ULL;
long long int var_17 = 8802990269023582575LL;
int zero = 0;
unsigned long long int var_19 = 1431368709067453228ULL;
unsigned short var_20 = (unsigned short)43929;
signed char var_21 = (signed char)-94;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)41230;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
