#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16169;
int var_5 = 2062660990;
long long int var_9 = 6399452207829410949LL;
int zero = 0;
signed char var_11 = (signed char)111;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 16803098552510479718ULL;
unsigned int var_14 = 3013377844U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
