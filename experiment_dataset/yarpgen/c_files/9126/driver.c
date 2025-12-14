#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2124;
signed char var_1 = (signed char)111;
int var_2 = -878506558;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 13673229640601621554ULL;
unsigned char var_8 = (unsigned char)101;
int var_9 = -1935933479;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-18658;
unsigned int var_15 = 905359301U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)51917;
unsigned char var_18 = (unsigned char)35;
unsigned short var_19 = (unsigned short)54927;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
