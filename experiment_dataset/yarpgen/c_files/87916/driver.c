#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7479;
signed char var_1 = (signed char)-61;
signed char var_2 = (signed char)106;
unsigned short var_3 = (unsigned short)27303;
_Bool var_4 = (_Bool)0;
long long int var_5 = 5435000506486465025LL;
unsigned char var_6 = (unsigned char)152;
unsigned char var_7 = (unsigned char)11;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 11763555108803913732ULL;
int var_12 = 1986843162;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
