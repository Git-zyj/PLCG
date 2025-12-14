#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -697359445;
unsigned short var_3 = (unsigned short)12636;
long long int var_4 = -3602869884432052178LL;
unsigned short var_5 = (unsigned short)20945;
int zero = 0;
int var_11 = -1643353458;
int var_12 = -1130627421;
unsigned char var_13 = (unsigned char)170;
void init() {
}

void checksum() {
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
