#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8274291339967946026LL;
unsigned short var_5 = (unsigned short)64360;
unsigned short var_10 = (unsigned short)27565;
short var_12 = (short)14650;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
