#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 352049007U;
signed char var_1 = (signed char)30;
unsigned int var_2 = 1395029829U;
unsigned long long int var_4 = 14723879519498457076ULL;
unsigned short var_5 = (unsigned short)53440;
long long int var_6 = 1102546704328717252LL;
unsigned int var_7 = 908789435U;
short var_9 = (short)3547;
int zero = 0;
unsigned long long int var_10 = 6483442469951710947ULL;
unsigned short var_11 = (unsigned short)8995;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
