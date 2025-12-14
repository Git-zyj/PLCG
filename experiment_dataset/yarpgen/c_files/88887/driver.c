#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)45917;
unsigned long long int var_2 = 16346918169052770077ULL;
unsigned short var_5 = (unsigned short)62850;
unsigned int var_6 = 1122674006U;
int var_7 = 1262708425;
signed char var_8 = (signed char)66;
long long int var_11 = -8010515499682800404LL;
unsigned long long int var_13 = 32473456867572152ULL;
unsigned long long int var_14 = 3914308163250081724ULL;
unsigned long long int var_17 = 4592744470198926880ULL;
int zero = 0;
short var_20 = (short)8999;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)252;
signed char var_23 = (signed char)72;
int var_24 = -295052963;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
