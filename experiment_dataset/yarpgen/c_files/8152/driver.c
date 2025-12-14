#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 1968429475U;
unsigned short var_4 = (unsigned short)64153;
long long int var_5 = 1172119101533186038LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)8408;
unsigned int var_10 = 2547579803U;
int zero = 0;
unsigned long long int var_11 = 13438426035917691192ULL;
unsigned char var_12 = (unsigned char)244;
long long int var_13 = -3493760400464900119LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
