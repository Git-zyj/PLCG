#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)63;
unsigned int var_10 = 3830585175U;
unsigned short var_11 = (unsigned short)46972;
short var_12 = (short)-157;
unsigned char var_15 = (unsigned char)51;
int zero = 0;
short var_17 = (short)30816;
long long int var_18 = -5356043591686390221LL;
long long int var_19 = -712038453563478799LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
