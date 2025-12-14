#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21188;
unsigned long long int var_1 = 10248169397328431772ULL;
short var_2 = (short)-30640;
unsigned short var_3 = (unsigned short)23282;
unsigned short var_4 = (unsigned short)64602;
unsigned int var_5 = 440119804U;
short var_6 = (short)-20829;
long long int var_8 = 9034639402606895782LL;
int var_9 = 1233753850;
int var_12 = 1783299313;
int zero = 0;
unsigned int var_13 = 3597853417U;
long long int var_14 = 8636085415455720106LL;
short var_15 = (short)-24736;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
