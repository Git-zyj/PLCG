#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)100;
_Bool var_4 = (_Bool)0;
int var_5 = 1373388514;
unsigned short var_8 = (unsigned short)55396;
unsigned long long int var_10 = 237250615737451204ULL;
long long int var_13 = 7809865609732546739LL;
int zero = 0;
long long int var_18 = 5406911625160061836LL;
signed char var_19 = (signed char)9;
int var_20 = 821336107;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
