#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -903382695;
int var_3 = 807710949;
unsigned char var_6 = (unsigned char)214;
unsigned long long int var_7 = 4174723239171934633ULL;
unsigned int var_8 = 1257177033U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3971911712U;
int zero = 0;
short var_13 = (short)23254;
long long int var_14 = -2526252073209698444LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
