#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3694203774U;
unsigned int var_2 = 1390386260U;
int var_5 = -1110895593;
unsigned int var_7 = 2987910335U;
unsigned int var_8 = 2488334658U;
unsigned short var_9 = (unsigned short)16989;
int zero = 0;
int var_10 = 1056080569;
_Bool var_11 = (_Bool)0;
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
