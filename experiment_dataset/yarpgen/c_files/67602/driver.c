#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3326001421U;
unsigned char var_3 = (unsigned char)185;
unsigned char var_8 = (unsigned char)201;
int zero = 0;
unsigned int var_16 = 1773037293U;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)138;
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
