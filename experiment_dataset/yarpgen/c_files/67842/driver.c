#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25497;
short var_9 = (short)31764;
unsigned short var_13 = (unsigned short)19160;
int zero = 0;
long long int var_14 = -1600843914893213914LL;
unsigned long long int var_15 = 12010059213118549617ULL;
signed char var_16 = (signed char)105;
long long int var_17 = -4026233282650354278LL;
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
