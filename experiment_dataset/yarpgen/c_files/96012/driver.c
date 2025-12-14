#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10001;
long long int var_1 = -1276707486812225776LL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-8996;
unsigned char var_4 = (unsigned char)115;
unsigned short var_5 = (unsigned short)10983;
unsigned int var_8 = 2699658228U;
int zero = 0;
int var_10 = 951749169;
int var_11 = 1535081995;
unsigned int var_12 = 2117840410U;
long long int var_13 = -2951807355459977379LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
