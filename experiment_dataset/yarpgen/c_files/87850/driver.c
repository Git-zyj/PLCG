#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 949320723;
unsigned long long int var_3 = 4202384605970462642ULL;
short var_4 = (short)-24053;
long long int var_6 = 1543478941480557137LL;
unsigned short var_9 = (unsigned short)19264;
unsigned short var_14 = (unsigned short)61567;
unsigned char var_15 = (unsigned char)36;
int var_16 = -2063790395;
int zero = 0;
short var_19 = (short)-32334;
unsigned long long int var_20 = 3127764461800992093ULL;
void init() {
}

void checksum() {
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
