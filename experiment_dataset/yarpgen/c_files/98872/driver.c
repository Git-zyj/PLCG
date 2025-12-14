#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24998;
unsigned short var_3 = (unsigned short)50215;
_Bool var_4 = (_Bool)0;
int var_5 = -1654883354;
int var_6 = -606375367;
unsigned int var_7 = 2972058831U;
int var_8 = 1566064396;
unsigned char var_9 = (unsigned char)239;
unsigned long long int var_10 = 18254877337205556684ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = 860329442;
unsigned long long int var_14 = 15599254120469497821ULL;
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
