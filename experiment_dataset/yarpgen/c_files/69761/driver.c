#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 17772249174703131566ULL;
unsigned char var_12 = (unsigned char)61;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 4848597536289929694LL;
int var_17 = 145017037;
unsigned long long int var_18 = 780603377470199100ULL;
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
