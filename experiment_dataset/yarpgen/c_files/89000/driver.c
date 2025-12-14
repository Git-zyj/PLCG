#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7464;
short var_4 = (short)11872;
int var_5 = -1598492923;
_Bool var_6 = (_Bool)1;
int var_8 = -1305779725;
int zero = 0;
unsigned char var_10 = (unsigned char)211;
short var_11 = (short)-25899;
int var_12 = 2105870167;
int var_13 = 139328016;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
