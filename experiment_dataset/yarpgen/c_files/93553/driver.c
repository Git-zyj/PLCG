#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39877;
unsigned long long int var_8 = 5379425888662688699ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 2903201895U;
int var_17 = 2019219171;
int var_18 = -1528639868;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1848670011U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
