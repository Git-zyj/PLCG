#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
int var_9 = 1296832202;
unsigned char var_11 = (unsigned char)74;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -2775839984233395050LL;
int var_17 = -1750630542;
void init() {
}

void checksum() {
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
