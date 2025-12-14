#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)4646;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3661972566U;
int zero = 0;
unsigned char var_11 = (unsigned char)19;
unsigned long long int var_12 = 16829383073492222294ULL;
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
