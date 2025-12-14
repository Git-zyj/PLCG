#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10741;
unsigned long long int var_2 = 3155612694739316973ULL;
unsigned char var_5 = (unsigned char)198;
int var_6 = -1542363636;
short var_7 = (short)236;
unsigned long long int var_8 = 4033512716609853682ULL;
_Bool var_9 = (_Bool)0;
int var_10 = 1859193967;
unsigned char var_11 = (unsigned char)70;
int zero = 0;
int var_12 = -1126194183;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
