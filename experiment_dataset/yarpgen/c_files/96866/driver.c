#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1721920046;
unsigned short var_5 = (unsigned short)56430;
unsigned long long int var_6 = 17384705077936225677ULL;
unsigned long long int var_7 = 12730876875762952601ULL;
int var_11 = 1279053575;
_Bool var_13 = (_Bool)1;
long long int var_16 = 6938364076957975691LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2584186479U;
int var_20 = 926720073;
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
