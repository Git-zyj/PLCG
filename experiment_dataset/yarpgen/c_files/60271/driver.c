#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-120;
_Bool var_2 = (_Bool)1;
long long int var_3 = 6411290113089149160LL;
long long int var_6 = 2860693632118358545LL;
unsigned short var_7 = (unsigned short)6005;
long long int var_8 = -1694179591861641410LL;
long long int var_14 = 7022642692783022689LL;
long long int var_15 = -8960543255650065664LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3012796690U;
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
