#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)251;
unsigned long long int var_9 = 9733361754341570059ULL;
short var_12 = (short)-2243;
unsigned long long int var_14 = 7978318149880317413ULL;
_Bool var_16 = (_Bool)1;
int var_17 = -1766237274;
int zero = 0;
short var_18 = (short)27917;
long long int var_19 = -5018222102298546355LL;
int var_20 = -1066559667;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
