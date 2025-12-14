#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58920;
unsigned short var_2 = (unsigned short)36523;
short var_4 = (short)-11281;
_Bool var_5 = (_Bool)1;
long long int var_6 = 4970692093590966778LL;
int var_7 = 1069001025;
long long int var_9 = 2012158716248785734LL;
int var_13 = 173809703;
long long int var_14 = 3784588345949838918LL;
unsigned short var_15 = (unsigned short)33226;
int zero = 0;
unsigned char var_16 = (unsigned char)29;
unsigned short var_17 = (unsigned short)130;
int var_18 = 1346640789;
long long int var_19 = -4939340330954787328LL;
unsigned short var_20 = (unsigned short)8259;
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
