#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
unsigned long long int var_1 = 15651769201787665070ULL;
unsigned char var_2 = (unsigned char)0;
unsigned char var_3 = (unsigned char)9;
unsigned int var_4 = 2330218651U;
unsigned char var_8 = (unsigned char)205;
short var_9 = (short)29465;
unsigned char var_10 = (unsigned char)91;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_15 = (short)10270;
int var_16 = -810459946;
void init() {
}

void checksum() {
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
