#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)2;
_Bool var_9 = (_Bool)1;
signed char var_13 = (signed char)-87;
int zero = 0;
long long int var_16 = 1952660444495232974LL;
signed char var_17 = (signed char)-64;
int var_18 = -826930104;
unsigned int var_19 = 2716510555U;
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
