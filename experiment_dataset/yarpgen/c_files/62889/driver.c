#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)214;
unsigned short var_2 = (unsigned short)54280;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)93;
unsigned char var_5 = (unsigned char)188;
short var_9 = (short)-9080;
unsigned short var_11 = (unsigned short)29542;
int zero = 0;
unsigned short var_12 = (unsigned short)18016;
short var_13 = (short)3074;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
