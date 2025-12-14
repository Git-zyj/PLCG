#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-119;
_Bool var_6 = (_Bool)0;
short var_7 = (short)16316;
long long int var_8 = 538119132801261097LL;
int var_10 = 1211748189;
signed char var_11 = (signed char)17;
unsigned short var_16 = (unsigned short)59;
signed char var_17 = (signed char)67;
int zero = 0;
unsigned long long int var_20 = 10297660594378824177ULL;
short var_21 = (short)23090;
signed char var_22 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
