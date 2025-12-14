#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -63737982;
unsigned char var_2 = (unsigned char)67;
unsigned char var_3 = (unsigned char)69;
short var_4 = (short)17013;
unsigned short var_5 = (unsigned short)50547;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_10 = 3814992300159193826LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
