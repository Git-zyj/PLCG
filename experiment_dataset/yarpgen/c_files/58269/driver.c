#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5015604782938005176LL;
_Bool var_2 = (_Bool)0;
long long int var_5 = 1614613789566463335LL;
short var_6 = (short)31545;
unsigned char var_10 = (unsigned char)20;
unsigned long long int var_13 = 3161707995727298705ULL;
long long int var_14 = -2812150116458672552LL;
int zero = 0;
int var_16 = -147804835;
unsigned long long int var_17 = 17874394986961023185ULL;
unsigned int var_18 = 2939031937U;
unsigned long long int var_19 = 9691565672363229714ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
