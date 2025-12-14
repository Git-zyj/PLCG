#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6767152634948035955ULL;
int var_2 = 338878567;
unsigned int var_3 = 311266599U;
long long int var_4 = -1501355057837512514LL;
short var_5 = (short)-14559;
_Bool var_7 = (_Bool)1;
short var_8 = (short)24403;
long long int var_9 = -5591670452164605905LL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-22882;
unsigned int var_13 = 900071940U;
short var_14 = (short)8017;
int zero = 0;
unsigned short var_16 = (unsigned short)9900;
long long int var_17 = -8497015729070324042LL;
_Bool var_18 = (_Bool)0;
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
