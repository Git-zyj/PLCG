#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
long long int var_2 = 4753924483215489083LL;
unsigned char var_3 = (unsigned char)151;
short var_8 = (short)1034;
_Bool var_10 = (_Bool)1;
unsigned char var_14 = (unsigned char)235;
signed char var_15 = (signed char)-65;
int var_18 = 355855117;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -5903634954506972807LL;
long long int var_21 = 7639180224920126865LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
