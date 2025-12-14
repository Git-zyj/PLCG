#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)30498;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_15 = (signed char)85;
long long int var_17 = -6291721741316479443LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-53;
long long int var_20 = -7564779626896287112LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
