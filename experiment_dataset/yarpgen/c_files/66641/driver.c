#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6861;
_Bool var_1 = (_Bool)1;
long long int var_2 = -697766801983118513LL;
unsigned char var_3 = (unsigned char)175;
short var_4 = (short)3580;
signed char var_7 = (signed char)97;
unsigned short var_9 = (unsigned short)37277;
int zero = 0;
short var_10 = (short)11785;
signed char var_11 = (signed char)103;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
