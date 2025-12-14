#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1212422382;
unsigned char var_1 = (unsigned char)254;
short var_2 = (short)-362;
long long int var_3 = 2978377406955371563LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 13764082871933969228ULL;
unsigned char var_7 = (unsigned char)40;
int var_8 = 1185365327;
int var_9 = 356474329;
unsigned short var_10 = (unsigned short)18474;
int zero = 0;
unsigned char var_11 = (unsigned char)6;
int var_12 = 2042241763;
long long int var_13 = -277130844698070771LL;
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
