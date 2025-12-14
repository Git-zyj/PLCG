#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)93;
_Bool var_2 = (_Bool)0;
long long int var_3 = 1839805419439511244LL;
unsigned char var_8 = (unsigned char)119;
unsigned char var_10 = (unsigned char)100;
unsigned short var_13 = (unsigned short)37128;
unsigned char var_16 = (unsigned char)16;
int zero = 0;
int var_17 = -1583725062;
int var_18 = 1568422760;
signed char var_19 = (signed char)-75;
void init() {
}

void checksum() {
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
