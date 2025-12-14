#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30631;
unsigned long long int var_5 = 1548014071470407562ULL;
unsigned long long int var_6 = 12065672787070332161ULL;
unsigned long long int var_7 = 11565133960070297289ULL;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-40;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)39653;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
