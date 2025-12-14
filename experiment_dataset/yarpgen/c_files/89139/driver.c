#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 1644685463;
unsigned int var_4 = 1649907042U;
unsigned char var_5 = (unsigned char)122;
unsigned char var_6 = (unsigned char)101;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 3882453734050130059ULL;
unsigned long long int var_11 = 6553094640292938167ULL;
unsigned short var_12 = (unsigned short)13501;
int zero = 0;
unsigned short var_13 = (unsigned short)40422;
signed char var_14 = (signed char)-103;
signed char var_15 = (signed char)-127;
short var_16 = (short)30913;
void init() {
}

void checksum() {
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
