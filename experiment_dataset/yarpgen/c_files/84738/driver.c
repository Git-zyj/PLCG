#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)31615;
long long int var_7 = 5814815567220363467LL;
short var_8 = (short)-10300;
long long int var_13 = -4054449467416349692LL;
unsigned int var_14 = 733686443U;
int zero = 0;
unsigned int var_15 = 1285517892U;
short var_16 = (short)-28133;
void init() {
}

void checksum() {
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
