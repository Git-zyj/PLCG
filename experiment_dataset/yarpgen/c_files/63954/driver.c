#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1881676211993253277LL;
short var_7 = (short)-6181;
long long int var_8 = 46553194230692051LL;
long long int var_9 = 5856207310091953089LL;
short var_11 = (short)1941;
short var_12 = (short)23730;
int zero = 0;
short var_15 = (short)-313;
short var_16 = (short)-23657;
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
