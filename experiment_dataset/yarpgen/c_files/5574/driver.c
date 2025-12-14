#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)6;
unsigned long long int var_4 = 15217757818955411607ULL;
unsigned int var_6 = 3790021191U;
int var_7 = 599636706;
unsigned int var_8 = 3447612320U;
int var_11 = 67424547;
unsigned int var_13 = 2696462534U;
unsigned short var_14 = (unsigned short)56442;
int zero = 0;
long long int var_16 = -1491478107994490877LL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)2420;
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
