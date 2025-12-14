#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 125942481;
int var_4 = 1450442999;
short var_5 = (short)11605;
unsigned short var_6 = (unsigned short)27087;
int var_7 = 148288495;
_Bool var_8 = (_Bool)0;
int var_9 = -132801742;
int zero = 0;
short var_10 = (short)10189;
int var_11 = -1267978001;
long long int var_12 = -170708247221984040LL;
unsigned int var_13 = 697480605U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
