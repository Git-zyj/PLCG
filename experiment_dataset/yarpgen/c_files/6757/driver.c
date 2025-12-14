#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4667981900004668755LL;
long long int var_2 = 92351428768676537LL;
unsigned long long int var_5 = 11854929476258023338ULL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
short var_9 = (short)8286;
signed char var_12 = (signed char)115;
unsigned int var_13 = 3091655629U;
int zero = 0;
unsigned int var_18 = 3880966495U;
unsigned long long int var_19 = 6150574010783859389ULL;
unsigned short var_20 = (unsigned short)42417;
void init() {
}

void checksum() {
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
