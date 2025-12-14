#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23250;
unsigned char var_5 = (unsigned char)215;
unsigned char var_6 = (unsigned char)111;
int var_7 = 2131768539;
short var_9 = (short)29373;
int var_10 = -208329693;
unsigned long long int var_11 = 11237232111861985094ULL;
long long int var_13 = 512966464658863515LL;
int var_14 = 2079848553;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6482332939353112751LL;
int zero = 0;
int var_18 = -424254340;
unsigned char var_19 = (unsigned char)5;
unsigned char var_20 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
