#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
unsigned int var_1 = 2322981638U;
long long int var_3 = 2353283411764627232LL;
unsigned char var_4 = (unsigned char)34;
int var_6 = 1513857319;
unsigned char var_7 = (unsigned char)4;
short var_8 = (short)-24528;
int var_9 = 1662913192;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)10;
unsigned int var_13 = 3160911619U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
