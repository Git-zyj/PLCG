#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11176637327148391061ULL;
unsigned short var_1 = (unsigned short)37292;
long long int var_2 = -547627650297491809LL;
long long int var_3 = 7544456077122725744LL;
unsigned short var_4 = (unsigned short)45437;
long long int var_7 = 1837820125505158778LL;
long long int var_9 = -3237086600282522550LL;
short var_10 = (short)-9836;
short var_11 = (short)16668;
int var_15 = -268825617;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1398069118U;
_Bool var_18 = (_Bool)1;
int var_19 = 1437565864;
short var_20 = (short)25157;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
