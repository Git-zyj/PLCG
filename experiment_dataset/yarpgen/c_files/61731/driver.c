#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60158;
short var_5 = (short)5726;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-20918;
unsigned char var_11 = (unsigned char)51;
int zero = 0;
unsigned short var_16 = (unsigned short)56401;
unsigned char var_17 = (unsigned char)182;
short var_18 = (short)31278;
void init() {
}

void checksum() {
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
