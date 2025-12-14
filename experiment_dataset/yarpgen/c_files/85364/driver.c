#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1344196842;
long long int var_4 = -5021461785783214865LL;
int var_5 = -1478862048;
unsigned long long int var_6 = 1524158085424249645ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_11 = -8067366997129241093LL;
int zero = 0;
long long int var_12 = -7690078485893327772LL;
long long int var_13 = 6878581796359337821LL;
unsigned char var_14 = (unsigned char)88;
long long int var_15 = 5217600272804141124LL;
unsigned short var_16 = (unsigned short)60700;
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
