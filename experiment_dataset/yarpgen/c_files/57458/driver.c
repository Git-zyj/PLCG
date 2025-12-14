#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64903;
int var_1 = 1611986494;
unsigned short var_2 = (unsigned short)46222;
_Bool var_3 = (_Bool)0;
int var_4 = 263991213;
int var_9 = -1045832699;
_Bool var_10 = (_Bool)0;
int var_11 = 1278884285;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)2229;
int var_20 = 344711721;
_Bool var_21 = (_Bool)0;
int var_22 = 1292096435;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
