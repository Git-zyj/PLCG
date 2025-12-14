#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 669825223;
_Bool var_7 = (_Bool)1;
signed char var_12 = (signed char)-31;
short var_17 = (short)-22450;
int zero = 0;
unsigned int var_18 = 3230721966U;
long long int var_19 = 9165967334603734090LL;
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
