#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
unsigned int var_1 = 4288746337U;
unsigned int var_2 = 33515030U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)54514;
unsigned short var_7 = (unsigned short)45049;
unsigned short var_8 = (unsigned short)40183;
long long int var_9 = 6933253965406381369LL;
unsigned short var_10 = (unsigned short)28267;
int zero = 0;
unsigned short var_11 = (unsigned short)49403;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)35;
unsigned long long int var_14 = 12956503096532385755ULL;
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
