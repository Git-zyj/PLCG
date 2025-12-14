#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3581816065U;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 577922917U;
_Bool var_10 = (_Bool)0;
long long int var_12 = 340675409812008849LL;
long long int var_14 = -5577956963073045792LL;
unsigned int var_15 = 2339025483U;
int zero = 0;
long long int var_16 = 6555947066437582199LL;
unsigned int var_17 = 3297073704U;
unsigned int var_18 = 4265291695U;
unsigned int var_19 = 3942153000U;
void init() {
}

void checksum() {
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
