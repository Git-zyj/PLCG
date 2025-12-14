#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
long long int var_1 = -44239180691282928LL;
short var_2 = (short)20790;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-16882;
unsigned short var_5 = (unsigned short)19394;
short var_6 = (short)-7473;
int var_7 = 788917801;
short var_8 = (short)-5869;
unsigned short var_9 = (unsigned short)22691;
int zero = 0;
unsigned short var_10 = (unsigned short)60378;
signed char var_11 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
