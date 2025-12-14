#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
unsigned char var_2 = (unsigned char)49;
int var_4 = 534608161;
unsigned int var_5 = 617099667U;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)254;
int zero = 0;
int var_14 = -1045889571;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 17186261344107258960ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
