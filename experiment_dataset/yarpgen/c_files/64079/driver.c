#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)191;
unsigned char var_7 = (unsigned char)64;
int var_9 = -197565951;
unsigned int var_12 = 2678972014U;
long long int var_13 = 3640869115856702933LL;
int zero = 0;
unsigned char var_14 = (unsigned char)18;
long long int var_15 = 5246393692954395584LL;
unsigned int var_16 = 1796881477U;
unsigned char var_17 = (unsigned char)65;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
