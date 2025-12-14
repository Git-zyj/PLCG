#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4950638659908437591LL;
unsigned long long int var_3 = 13428642850441536083ULL;
unsigned short var_4 = (unsigned short)37248;
unsigned short var_5 = (unsigned short)9696;
int var_6 = 982087280;
int var_7 = -730913030;
unsigned short var_8 = (unsigned short)1853;
long long int var_9 = 4320645643266953237LL;
signed char var_10 = (signed char)72;
int var_11 = -549579982;
unsigned int var_14 = 1284219209U;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)-126;
_Bool var_17 = (_Bool)1;
short var_18 = (short)10920;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
