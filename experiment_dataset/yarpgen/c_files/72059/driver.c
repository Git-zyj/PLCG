#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)87;
signed char var_2 = (signed char)53;
short var_3 = (short)-32218;
short var_4 = (short)31243;
unsigned short var_6 = (unsigned short)29790;
signed char var_8 = (signed char)-55;
signed char var_9 = (signed char)-9;
unsigned short var_10 = (unsigned short)64809;
long long int var_12 = -2658501124611181030LL;
int zero = 0;
short var_15 = (short)-653;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 3358150050421549645ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
