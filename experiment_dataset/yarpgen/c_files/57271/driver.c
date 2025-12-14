#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)110;
unsigned int var_9 = 3903869458U;
long long int var_12 = -2329476646325044838LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1661016956U;
long long int var_16 = 1383145094678764976LL;
unsigned long long int var_17 = 5436243014868795144ULL;
unsigned short var_18 = (unsigned short)46917;
unsigned int var_19 = 1320040481U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
