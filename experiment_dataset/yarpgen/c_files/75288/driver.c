#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = -2804945792899578108LL;
unsigned char var_9 = (unsigned char)10;
unsigned char var_10 = (unsigned char)146;
unsigned int var_11 = 2030835216U;
int zero = 0;
long long int var_15 = -4331722038215811505LL;
unsigned int var_16 = 482060655U;
unsigned char var_17 = (unsigned char)117;
unsigned int var_18 = 2028780259U;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)13022;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
