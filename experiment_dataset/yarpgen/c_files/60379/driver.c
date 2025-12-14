#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3515117390U;
_Bool var_1 = (_Bool)1;
long long int var_12 = -8959243456438741231LL;
int zero = 0;
short var_13 = (short)-14991;
short var_14 = (short)10376;
unsigned int var_15 = 549424322U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
