#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)41335;
_Bool var_6 = (_Bool)0;
long long int var_9 = -87007110065120067LL;
_Bool var_11 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)69;
unsigned long long int var_20 = 6822770500053847132ULL;
unsigned int var_21 = 1706739380U;
unsigned int var_22 = 3121198330U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
