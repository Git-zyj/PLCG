#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13665;
int var_3 = -205498802;
short var_4 = (short)2369;
unsigned short var_7 = (unsigned short)7957;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)201;
long long int var_16 = -5420108360602075486LL;
short var_17 = (short)-5563;
int zero = 0;
int var_19 = 805860896;
unsigned long long int var_20 = 12180440951610125823ULL;
signed char var_21 = (signed char)-62;
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
