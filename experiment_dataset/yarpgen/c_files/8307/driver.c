#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
long long int var_2 = 5837639927612524853LL;
unsigned short var_5 = (unsigned short)17141;
unsigned short var_7 = (unsigned short)6425;
signed char var_10 = (signed char)60;
int zero = 0;
unsigned int var_13 = 1534258677U;
long long int var_14 = -1494248337742210453LL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
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
