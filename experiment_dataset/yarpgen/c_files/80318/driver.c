#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2361091484783792580LL;
long long int var_4 = 8111354251175831057LL;
short var_5 = (short)23168;
unsigned long long int var_9 = 1012063165700185058ULL;
unsigned short var_11 = (unsigned short)20396;
unsigned short var_13 = (unsigned short)55481;
unsigned int var_18 = 159981774U;
int zero = 0;
unsigned long long int var_20 = 2247330836695261841ULL;
_Bool var_21 = (_Bool)0;
long long int var_22 = -2796565741883167266LL;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
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
