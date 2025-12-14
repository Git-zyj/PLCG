#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5175046081221760794LL;
long long int var_4 = -5339994489484358484LL;
int var_10 = 1531482801;
short var_11 = (short)12518;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)235;
int zero = 0;
long long int var_16 = -8975059503540348469LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
