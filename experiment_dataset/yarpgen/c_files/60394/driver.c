#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)176;
int var_9 = -1381538096;
long long int var_10 = 1736537541031952754LL;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 4107497877U;
unsigned short var_16 = (unsigned short)22245;
unsigned short var_18 = (unsigned short)19664;
unsigned char var_19 = (unsigned char)214;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)199;
int var_22 = -310335566;
void init() {
}

void checksum() {
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
