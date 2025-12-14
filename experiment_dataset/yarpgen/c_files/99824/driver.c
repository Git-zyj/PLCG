#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -735426929;
unsigned long long int var_1 = 8360834684663346400ULL;
unsigned char var_2 = (unsigned char)157;
unsigned char var_4 = (unsigned char)142;
unsigned int var_6 = 2694468718U;
int var_10 = -627104551;
unsigned int var_11 = 3085100402U;
int var_12 = 296069585;
long long int var_14 = -3313147679298231600LL;
int zero = 0;
short var_16 = (short)16084;
short var_17 = (short)17266;
signed char var_18 = (signed char)20;
unsigned short var_19 = (unsigned short)6166;
unsigned short var_20 = (unsigned short)46373;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
