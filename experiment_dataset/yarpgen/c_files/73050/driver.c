#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18151460372233443444ULL;
unsigned int var_9 = 3007509651U;
int var_10 = -335745054;
int var_12 = -1247854419;
short var_16 = (short)5692;
int zero = 0;
long long int var_17 = 1202658072377996926LL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1581372932873093354ULL;
long long int var_20 = 6140124623611187965LL;
void init() {
}

void checksum() {
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
