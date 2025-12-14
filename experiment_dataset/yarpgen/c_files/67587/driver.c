#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55626;
unsigned short var_1 = (unsigned short)64644;
unsigned int var_3 = 3187455419U;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)142;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 4144803721U;
long long int var_10 = 2359988874901213353LL;
unsigned short var_11 = (unsigned short)36184;
unsigned char var_12 = (unsigned char)145;
long long int var_13 = 101705644520510174LL;
unsigned char var_14 = (unsigned char)241;
unsigned long long int var_15 = 3603710038510672458ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)45877;
unsigned char var_17 = (unsigned char)147;
int var_18 = 866093202;
signed char var_19 = (signed char)85;
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
