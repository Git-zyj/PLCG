#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5538819000109344487LL;
long long int var_7 = 6360011620521535187LL;
short var_8 = (short)26979;
long long int var_12 = 7352471970260576448LL;
unsigned short var_13 = (unsigned short)3398;
unsigned char var_14 = (unsigned char)72;
int zero = 0;
unsigned long long int var_19 = 8558227393542971409ULL;
short var_20 = (short)8551;
unsigned char var_21 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
