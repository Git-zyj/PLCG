#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12214762064134474328ULL;
unsigned int var_3 = 1097904598U;
int var_6 = -577868850;
unsigned long long int var_7 = 3297688832824694433ULL;
int var_8 = -2009789268;
unsigned short var_9 = (unsigned short)19699;
_Bool var_12 = (_Bool)0;
int var_13 = -1784688733;
int zero = 0;
unsigned long long int var_20 = 3134410940885645538ULL;
unsigned int var_21 = 395674268U;
unsigned int var_22 = 4175686440U;
unsigned char var_23 = (unsigned char)48;
int var_24 = 977196878;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
