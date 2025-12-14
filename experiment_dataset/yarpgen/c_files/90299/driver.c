#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
unsigned short var_4 = (unsigned short)17871;
unsigned int var_7 = 3823994069U;
int var_10 = -1420698589;
int zero = 0;
int var_16 = 1128044425;
unsigned char var_17 = (unsigned char)179;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-4269;
unsigned short var_20 = (unsigned short)35450;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
