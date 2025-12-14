#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2495362564U;
signed char var_1 = (signed char)-8;
signed char var_2 = (signed char)34;
unsigned int var_3 = 1425187914U;
short var_4 = (short)16932;
unsigned long long int var_5 = 2333550021763771154ULL;
short var_6 = (short)6021;
unsigned long long int var_7 = 15913140616051607957ULL;
long long int var_8 = 440526742034852228LL;
short var_9 = (short)-615;
long long int var_10 = 3734800844024426538LL;
long long int var_11 = 2672560622793499577LL;
long long int var_12 = -4325063471279691218LL;
int zero = 0;
unsigned char var_13 = (unsigned char)188;
short var_14 = (short)-11809;
long long int var_15 = 5883264235207479626LL;
unsigned int var_16 = 264669373U;
unsigned short var_17 = (unsigned short)47015;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
