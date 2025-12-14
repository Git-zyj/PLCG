#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)40341;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)21103;
long long int var_11 = 4970927052595187873LL;
long long int var_12 = -7623700621631121608LL;
int zero = 0;
long long int var_13 = -8699455988542199253LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
