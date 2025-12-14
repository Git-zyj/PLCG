#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20480;
long long int var_1 = -2244266379066929095LL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 4019025434071403853ULL;
unsigned char var_6 = (unsigned char)155;
unsigned char var_7 = (unsigned char)70;
short var_14 = (short)13580;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 2034937680;
_Bool var_18 = (_Bool)1;
short var_19 = (short)14250;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
