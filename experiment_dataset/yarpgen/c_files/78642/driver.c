#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 4272964073U;
unsigned int var_3 = 3030552560U;
unsigned char var_4 = (unsigned char)2;
unsigned short var_6 = (unsigned short)29000;
unsigned short var_8 = (unsigned short)59622;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)89;
unsigned long long int var_12 = 15455657981510408264ULL;
int zero = 0;
unsigned int var_14 = 2759953487U;
unsigned int var_15 = 1449484101U;
unsigned int var_16 = 848693736U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
