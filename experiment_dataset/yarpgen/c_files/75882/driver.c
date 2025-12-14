#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2024740481;
unsigned int var_1 = 3224764387U;
unsigned int var_6 = 1117669826U;
short var_7 = (short)-3232;
long long int var_9 = -4428638318692151003LL;
int zero = 0;
unsigned long long int var_11 = 12890492357274045461ULL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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
