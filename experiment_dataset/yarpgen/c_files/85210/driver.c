#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-40;
signed char var_5 = (signed char)-127;
_Bool var_6 = (_Bool)0;
int var_7 = 506464270;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 166273747U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 2335133405U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7935667940750081586ULL;
short var_15 = (short)-26803;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
