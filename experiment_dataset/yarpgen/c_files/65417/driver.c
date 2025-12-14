#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1050908751;
int var_4 = 345339436;
unsigned int var_5 = 2991015617U;
long long int var_7 = 1859885620357932711LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 959324001;
int var_12 = -517014494;
long long int var_13 = 7880199043860094458LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
