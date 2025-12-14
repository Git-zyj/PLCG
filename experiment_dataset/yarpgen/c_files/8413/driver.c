#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1594172656;
int var_1 = 1317804832;
unsigned int var_4 = 1971019326U;
int var_8 = -1272916179;
_Bool var_12 = (_Bool)1;
int var_14 = 1237415044;
unsigned int var_15 = 1741092756U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3423122729U;
int var_21 = -1015844707;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
