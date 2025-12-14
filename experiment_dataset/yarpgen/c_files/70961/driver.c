#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8363771144328293970LL;
unsigned int var_1 = 536189609U;
unsigned char var_4 = (unsigned char)153;
unsigned char var_5 = (unsigned char)80;
unsigned int var_6 = 837580375U;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-31;
long long int var_10 = -8615265481509784190LL;
int zero = 0;
short var_11 = (short)23391;
long long int var_12 = -3954896641890022288LL;
unsigned short var_13 = (unsigned short)12445;
unsigned int var_14 = 2481640424U;
void init() {
}

void checksum() {
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
