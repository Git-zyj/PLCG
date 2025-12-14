#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8449123447920131020LL;
short var_12 = (short)6860;
int zero = 0;
unsigned long long int var_20 = 1180638133607307374ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -4057201873130133713LL;
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
