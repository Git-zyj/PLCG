#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 3399644608880869373ULL;
short var_13 = (short)11650;
int var_14 = -1200109352;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 16905453392354718971ULL;
signed char var_19 = (signed char)-32;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)168;
unsigned short var_22 = (unsigned short)812;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
