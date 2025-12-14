#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5011287086415966576LL;
long long int var_4 = -3713758219324994455LL;
short var_6 = (short)28211;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 4130318868555681664ULL;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-27351;
unsigned long long int var_14 = 12403439739543686975ULL;
short var_15 = (short)30786;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)10443;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
