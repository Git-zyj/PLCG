#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -93023371;
long long int var_9 = 4329367983906081213LL;
unsigned short var_10 = (unsigned short)9071;
unsigned int var_12 = 3948323196U;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = 238701241;
unsigned short var_17 = (unsigned short)31876;
void init() {
}

void checksum() {
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
