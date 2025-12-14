#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)16;
_Bool var_3 = (_Bool)1;
int var_4 = 70358004;
signed char var_5 = (signed char)-65;
unsigned char var_7 = (unsigned char)75;
unsigned long long int var_8 = 12089721173008239941ULL;
unsigned int var_9 = 3185970311U;
int zero = 0;
signed char var_10 = (signed char)-106;
signed char var_11 = (signed char)-81;
short var_12 = (short)8610;
long long int var_13 = 1554180051778432824LL;
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
