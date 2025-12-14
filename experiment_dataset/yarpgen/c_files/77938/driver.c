#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 123172696;
signed char var_8 = (signed char)-55;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)43589;
unsigned short var_12 = (unsigned short)65410;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 622363642U;
int zero = 0;
unsigned char var_15 = (unsigned char)206;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
