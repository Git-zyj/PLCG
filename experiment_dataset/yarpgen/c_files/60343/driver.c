#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2465813367U;
short var_5 = (short)-15324;
unsigned char var_13 = (unsigned char)90;
int zero = 0;
unsigned short var_18 = (unsigned short)22053;
unsigned char var_19 = (unsigned char)121;
unsigned char var_20 = (unsigned char)209;
void init() {
}

void checksum() {
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
