#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_4 = 668103891;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-8028;
int var_9 = -152448344;
unsigned long long int var_11 = 6905826282279882951ULL;
unsigned short var_12 = (unsigned short)36660;
unsigned long long int var_16 = 11925553248419627869ULL;
unsigned char var_18 = (unsigned char)173;
int zero = 0;
unsigned short var_20 = (unsigned short)23291;
unsigned short var_21 = (unsigned short)14503;
int var_22 = 90432777;
int var_23 = 149010757;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
