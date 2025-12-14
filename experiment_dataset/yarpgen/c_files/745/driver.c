#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1597643112U;
unsigned short var_4 = (unsigned short)45964;
unsigned short var_5 = (unsigned short)13824;
long long int var_6 = 6338772589770004297LL;
unsigned char var_7 = (unsigned char)224;
short var_9 = (short)6422;
int var_10 = 1424098041;
unsigned long long int var_11 = 7506083327400849740ULL;
unsigned int var_13 = 654922626U;
unsigned int var_14 = 536403403U;
int var_16 = -324234036;
int zero = 0;
unsigned int var_18 = 3693991256U;
long long int var_19 = 2564991078835417480LL;
void init() {
}

void checksum() {
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
