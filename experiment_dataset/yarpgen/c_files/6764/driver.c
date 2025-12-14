#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3603593015U;
short var_1 = (short)432;
unsigned int var_2 = 1901831507U;
unsigned long long int var_3 = 805299973556065794ULL;
unsigned char var_4 = (unsigned char)7;
unsigned long long int var_5 = 18079511812679085721ULL;
unsigned int var_8 = 3643909308U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)40412;
unsigned char var_11 = (unsigned char)219;
int var_12 = 1514604723;
short var_18 = (short)22495;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)14173;
long long int var_22 = 1530650920717114055LL;
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
