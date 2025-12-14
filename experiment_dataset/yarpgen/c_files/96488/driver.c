#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3783244954U;
unsigned long long int var_6 = 14576403686666764159ULL;
unsigned long long int var_8 = 9560905436936202436ULL;
_Bool var_11 = (_Bool)0;
int var_13 = -1450589347;
int var_16 = -502233658;
unsigned short var_17 = (unsigned short)49448;
short var_19 = (short)17485;
int zero = 0;
unsigned short var_20 = (unsigned short)51633;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
