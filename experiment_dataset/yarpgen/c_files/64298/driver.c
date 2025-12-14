#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9560;
int var_2 = 1481067559;
unsigned short var_3 = (unsigned short)38283;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)8864;
int zero = 0;
int var_10 = 336675009;
unsigned long long int var_11 = 3381004672656211390ULL;
unsigned char var_12 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
