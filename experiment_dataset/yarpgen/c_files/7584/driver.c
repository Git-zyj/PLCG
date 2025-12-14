#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -460024614;
long long int var_5 = -3523293029719321480LL;
unsigned short var_10 = (unsigned short)54080;
unsigned char var_11 = (unsigned char)185;
unsigned char var_12 = (unsigned char)219;
short var_15 = (short)-15925;
int zero = 0;
long long int var_17 = 3166370000393186916LL;
unsigned short var_18 = (unsigned short)39441;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
