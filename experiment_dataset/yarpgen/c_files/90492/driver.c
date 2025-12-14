#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -859773390;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)92;
unsigned char var_8 = (unsigned char)188;
int zero = 0;
int var_10 = -1535210322;
unsigned short var_11 = (unsigned short)55915;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
