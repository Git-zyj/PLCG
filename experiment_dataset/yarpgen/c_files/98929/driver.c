#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)211;
int var_7 = 1930849921;
_Bool var_10 = (_Bool)0;
long long int var_15 = -8425549401487058460LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 13596311U;
int var_20 = 1842409599;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
