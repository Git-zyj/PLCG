#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
unsigned int var_1 = 2470974009U;
unsigned int var_6 = 4259854504U;
unsigned int var_10 = 1251716542U;
unsigned short var_13 = (unsigned short)9834;
int zero = 0;
short var_16 = (short)26035;
unsigned short var_17 = (unsigned short)57847;
unsigned short var_18 = (unsigned short)10814;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
