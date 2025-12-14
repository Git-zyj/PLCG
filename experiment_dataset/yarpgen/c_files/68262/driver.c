#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 979422738;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)88;
signed char var_6 = (signed char)98;
int zero = 0;
int var_10 = 658004427;
unsigned char var_11 = (unsigned char)3;
long long int var_12 = 4061535156442907864LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
