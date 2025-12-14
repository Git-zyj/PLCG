#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -5801289232046880898LL;
signed char var_6 = (signed char)44;
unsigned long long int var_8 = 17565619599141605409ULL;
unsigned char var_9 = (unsigned char)254;
unsigned char var_11 = (unsigned char)233;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 2284371904591714500LL;
unsigned char var_15 = (unsigned char)5;
signed char var_16 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
