#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5792605771014444885LL;
long long int var_3 = 1618134104544653798LL;
unsigned short var_4 = (unsigned short)35092;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)28;
short var_9 = (short)-18910;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_12 = -935531030;
unsigned char var_13 = (unsigned char)69;
unsigned char var_14 = (unsigned char)244;
unsigned short var_15 = (unsigned short)50183;
int var_16 = -29128861;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
