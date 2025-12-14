#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8562216497885739795LL;
unsigned int var_7 = 3341479251U;
unsigned long long int var_14 = 8706948120283080421ULL;
unsigned short var_16 = (unsigned short)1047;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 919696188;
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
