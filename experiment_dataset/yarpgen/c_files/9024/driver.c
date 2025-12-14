#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)25328;
signed char var_5 = (signed char)-22;
unsigned long long int var_6 = 8403801832746374624ULL;
unsigned long long int var_7 = 11894677856433159156ULL;
unsigned short var_8 = (unsigned short)60263;
_Bool var_9 = (_Bool)1;
short var_11 = (short)11585;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10073973021680914012ULL;
int zero = 0;
unsigned int var_17 = 1796974703U;
long long int var_18 = 1986839783355077603LL;
unsigned short var_19 = (unsigned short)43008;
void init() {
}

void checksum() {
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
