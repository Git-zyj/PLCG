#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 976821765U;
unsigned long long int var_1 = 5940910697105285713ULL;
unsigned char var_4 = (unsigned char)173;
short var_5 = (short)-4985;
_Bool var_6 = (_Bool)0;
long long int var_11 = 7692974820985726448LL;
int zero = 0;
unsigned short var_12 = (unsigned short)60437;
unsigned char var_13 = (unsigned char)117;
unsigned int var_14 = 1781211528U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
