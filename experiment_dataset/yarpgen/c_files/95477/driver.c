#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)22;
unsigned long long int var_13 = 6463642851300009250ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -5019282862358557440LL;
unsigned char var_17 = (unsigned char)105;
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
