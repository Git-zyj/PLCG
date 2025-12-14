#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 9961750797438369696ULL;
unsigned int var_3 = 2544452450U;
int var_4 = -657330590;
long long int var_6 = 4848260854420204082LL;
int var_8 = -1851634911;
int var_10 = 2133859314;
unsigned long long int var_12 = 5888897095696573566ULL;
int zero = 0;
int var_17 = -1615877740;
unsigned int var_18 = 2308430284U;
void init() {
}

void checksum() {
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
