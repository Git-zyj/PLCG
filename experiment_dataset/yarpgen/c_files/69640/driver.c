#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -522340093137991778LL;
unsigned int var_2 = 485653567U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)33366;
int var_5 = -147850982;
long long int var_6 = 4164507609859055082LL;
unsigned char var_8 = (unsigned char)101;
unsigned char var_10 = (unsigned char)208;
int zero = 0;
long long int var_12 = 6820143928275760485LL;
unsigned char var_13 = (unsigned char)182;
long long int var_14 = 751891393972905785LL;
long long int var_15 = 7439271156383064636LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
