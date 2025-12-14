#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)91;
unsigned int var_4 = 4017114719U;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)5656;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)162;
unsigned char var_12 = (unsigned char)146;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1552449980U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
