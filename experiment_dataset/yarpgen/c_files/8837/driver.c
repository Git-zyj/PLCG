#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6076766480127886094ULL;
long long int var_2 = 1368089254546485444LL;
short var_4 = (short)13776;
signed char var_9 = (signed char)125;
long long int var_10 = -8869874118848439785LL;
_Bool var_13 = (_Bool)1;
short var_15 = (short)11595;
int zero = 0;
unsigned int var_17 = 150090944U;
unsigned char var_18 = (unsigned char)149;
long long int var_19 = 6872134338431097486LL;
short var_20 = (short)1388;
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
