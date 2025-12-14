#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -572844052;
signed char var_5 = (signed char)-73;
long long int var_8 = -6180732620503618625LL;
unsigned long long int var_9 = 12605748255307653460ULL;
signed char var_10 = (signed char)-42;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)51589;
_Bool var_17 = (_Bool)1;
int var_18 = 774543407;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
