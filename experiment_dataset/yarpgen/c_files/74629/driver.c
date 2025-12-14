#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
long long int var_2 = -6226613997449337497LL;
unsigned char var_3 = (unsigned char)151;
int var_5 = 800889061;
unsigned long long int var_6 = 14226075748909773544ULL;
unsigned int var_8 = 3633093188U;
short var_9 = (short)15269;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = 1962502050;
unsigned char var_14 = (unsigned char)76;
unsigned long long int var_15 = 11439383615961778791ULL;
unsigned short var_16 = (unsigned short)20334;
void init() {
}

void checksum() {
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
