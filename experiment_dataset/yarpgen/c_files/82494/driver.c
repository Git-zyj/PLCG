#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 383009233U;
short var_8 = (short)7955;
long long int var_9 = 6939673740114787167LL;
short var_10 = (short)-16352;
int var_14 = 2128390568;
int zero = 0;
long long int var_15 = 155046184836171812LL;
unsigned long long int var_16 = 12122507605862160278ULL;
short var_17 = (short)-16675;
short var_18 = (short)28197;
unsigned long long int var_19 = 3485783424329186265ULL;
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
