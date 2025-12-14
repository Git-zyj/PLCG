#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -901427468;
unsigned short var_6 = (unsigned short)14880;
int var_8 = 396912594;
long long int var_11 = -3104246734674579128LL;
int zero = 0;
int var_14 = -35811868;
long long int var_15 = -1593854363190264731LL;
short var_16 = (short)-28361;
short var_17 = (short)-14924;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
