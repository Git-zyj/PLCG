#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40043;
unsigned int var_2 = 881709064U;
unsigned int var_3 = 3607778327U;
unsigned char var_4 = (unsigned char)177;
long long int var_5 = 2398503235373428556LL;
int var_6 = 955687390;
long long int var_7 = 4852569018286320059LL;
int var_8 = 907382737;
long long int var_10 = 6784899799753792785LL;
signed char var_11 = (signed char)72;
int zero = 0;
unsigned short var_12 = (unsigned short)47452;
long long int var_13 = -4474341737605338223LL;
short var_14 = (short)17847;
unsigned int var_15 = 3579955405U;
unsigned int var_16 = 3573460239U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
