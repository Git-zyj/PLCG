#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6521896438250058761LL;
unsigned short var_1 = (unsigned short)36156;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-15877;
int var_5 = 54048508;
signed char var_6 = (signed char)-16;
long long int var_8 = -927304312946846413LL;
unsigned char var_10 = (unsigned char)84;
unsigned short var_11 = (unsigned short)34584;
int zero = 0;
unsigned long long int var_14 = 267149200050994752ULL;
int var_15 = 1110295750;
unsigned long long int var_16 = 892645035375662226ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
