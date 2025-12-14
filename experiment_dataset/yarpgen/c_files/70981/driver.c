#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -934310821;
long long int var_1 = 1507987693383916374LL;
long long int var_2 = 7002310485117407917LL;
int var_3 = 784702781;
long long int var_4 = -2334357614273975625LL;
unsigned short var_5 = (unsigned short)3287;
unsigned short var_9 = (unsigned short)7029;
long long int var_10 = 7140240907151149247LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 859005381915180335LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 5326103995612210212LL;
long long int var_16 = -737606454773461886LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
