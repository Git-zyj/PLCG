#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1188826939U;
_Bool var_5 = (_Bool)0;
short var_8 = (short)21632;
unsigned short var_12 = (unsigned short)62583;
unsigned long long int var_13 = 10096329132705685804ULL;
signed char var_15 = (signed char)-90;
signed char var_18 = (signed char)-31;
int zero = 0;
unsigned char var_20 = (unsigned char)240;
unsigned int var_21 = 3600368081U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
