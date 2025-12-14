#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18391513755250149677ULL;
unsigned char var_2 = (unsigned char)228;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_13 = 1891218149;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)245;
unsigned long long int var_19 = 9788604366827189592ULL;
unsigned short var_20 = (unsigned short)7505;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
