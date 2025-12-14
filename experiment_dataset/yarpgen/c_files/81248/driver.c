#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)167;
short var_4 = (short)-28709;
short var_6 = (short)7018;
unsigned int var_8 = 2702702019U;
unsigned int var_9 = 3515972906U;
long long int var_12 = -7910091106166549723LL;
int var_13 = 894602523;
short var_14 = (short)-2339;
int zero = 0;
unsigned char var_15 = (unsigned char)232;
unsigned int var_16 = 4104723792U;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3866049450429253213LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
