#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2798401079296277315LL;
signed char var_7 = (signed char)50;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)53;
short var_14 = (short)-22009;
signed char var_19 = (signed char)-26;
int zero = 0;
short var_20 = (short)3306;
_Bool var_21 = (_Bool)0;
short var_22 = (short)9134;
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
