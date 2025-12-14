#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14070;
unsigned long long int var_5 = 15860188652610131109ULL;
unsigned int var_6 = 1676031199U;
long long int var_9 = 1114945237450332423LL;
int zero = 0;
unsigned short var_10 = (unsigned short)4061;
unsigned short var_11 = (unsigned short)44163;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
