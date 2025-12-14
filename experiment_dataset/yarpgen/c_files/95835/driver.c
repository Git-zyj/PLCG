#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 317904222;
unsigned int var_4 = 1385667295U;
unsigned short var_7 = (unsigned short)23962;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 3765735212107946514LL;
long long int var_11 = 8861968858499127797LL;
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
