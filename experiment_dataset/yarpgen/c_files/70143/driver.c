#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57033;
unsigned long long int var_5 = 8553983910477085779ULL;
int var_6 = 858945309;
unsigned char var_8 = (unsigned char)96;
unsigned long long int var_10 = 14401597422345465995ULL;
int zero = 0;
long long int var_12 = -1451498979823241980LL;
unsigned int var_13 = 1346003368U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
