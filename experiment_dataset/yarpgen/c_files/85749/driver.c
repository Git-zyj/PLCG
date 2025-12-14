#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_6 = -7465184851529513595LL;
unsigned short var_7 = (unsigned short)28258;
long long int var_10 = 9149086699400674649LL;
unsigned short var_11 = (unsigned short)18904;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 15182934920306221458ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)32483;
unsigned short var_17 = (unsigned short)11674;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
