#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)215;
long long int var_5 = -5568848634311706829LL;
long long int var_6 = 2673117120973201435LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)36978;
short var_11 = (short)-9229;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-29234;
unsigned long long int var_14 = 17522129192021812373ULL;
unsigned char var_15 = (unsigned char)220;
int zero = 0;
unsigned int var_16 = 3806351412U;
short var_17 = (short)1640;
unsigned short var_18 = (unsigned short)16562;
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
