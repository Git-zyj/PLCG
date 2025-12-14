#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1063092377678504883ULL;
unsigned short var_1 = (unsigned short)60822;
short var_2 = (short)23409;
unsigned short var_3 = (unsigned short)9596;
signed char var_4 = (signed char)108;
unsigned short var_5 = (unsigned short)44809;
signed char var_6 = (signed char)118;
int var_7 = 119378461;
signed char var_8 = (signed char)20;
long long int var_9 = -2835988519129896545LL;
int zero = 0;
unsigned int var_10 = 596873770U;
unsigned short var_11 = (unsigned short)34406;
unsigned char var_12 = (unsigned char)148;
signed char var_13 = (signed char)5;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
