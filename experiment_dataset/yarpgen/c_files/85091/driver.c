#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 288484986U;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)3295;
unsigned short var_9 = (unsigned short)11250;
int zero = 0;
unsigned char var_14 = (unsigned char)140;
int var_15 = -501336041;
long long int var_16 = -7337369682429209339LL;
void init() {
}

void checksum() {
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
