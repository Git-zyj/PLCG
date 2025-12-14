#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13776382887313784145ULL;
unsigned long long int var_1 = 2699323757284343683ULL;
long long int var_7 = -6459158204243477576LL;
long long int var_8 = -6075871023155860996LL;
long long int var_10 = -401128683714478197LL;
int zero = 0;
long long int var_11 = -1301178965705248634LL;
long long int var_12 = 4366155012417274120LL;
long long int var_13 = -3100713804282769378LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
