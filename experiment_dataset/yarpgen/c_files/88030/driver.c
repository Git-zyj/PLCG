#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2332984728U;
unsigned char var_2 = (unsigned char)93;
_Bool var_3 = (_Bool)1;
int var_5 = 1511743190;
short var_6 = (short)26303;
unsigned short var_7 = (unsigned short)57889;
int var_8 = 1998569267;
unsigned char var_9 = (unsigned char)46;
signed char var_10 = (signed char)93;
int zero = 0;
unsigned char var_11 = (unsigned char)140;
short var_12 = (short)-10407;
long long int var_13 = -6169122501149838181LL;
signed char var_14 = (signed char)27;
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
