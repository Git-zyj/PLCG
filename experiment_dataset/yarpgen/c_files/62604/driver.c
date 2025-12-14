#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4148;
signed char var_1 = (signed char)68;
unsigned char var_2 = (unsigned char)189;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)62968;
unsigned short var_10 = (unsigned short)54538;
int zero = 0;
unsigned short var_11 = (unsigned short)19675;
unsigned short var_12 = (unsigned short)63006;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
