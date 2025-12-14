#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44018;
long long int var_1 = 1249290532140689771LL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-25416;
long long int var_5 = 286509799670773328LL;
unsigned short var_6 = (unsigned short)58647;
unsigned char var_7 = (unsigned char)186;
long long int var_8 = 4472380958792669332LL;
int var_9 = -192255332;
unsigned short var_10 = (unsigned short)45592;
unsigned short var_14 = (unsigned short)40367;
int zero = 0;
unsigned short var_15 = (unsigned short)45910;
unsigned short var_16 = (unsigned short)10000;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)190;
unsigned short var_19 = (unsigned short)42345;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
