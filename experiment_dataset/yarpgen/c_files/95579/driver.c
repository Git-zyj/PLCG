#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1449671838;
int var_4 = 390734973;
unsigned int var_9 = 3705575263U;
short var_11 = (short)32391;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -1294602032;
unsigned short var_16 = (unsigned short)32023;
unsigned char var_17 = (unsigned char)19;
unsigned short var_18 = (unsigned short)40482;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
