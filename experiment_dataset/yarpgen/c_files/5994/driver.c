#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_4 = (short)25410;
signed char var_5 = (signed char)-109;
unsigned long long int var_7 = 16331148459002203258ULL;
unsigned char var_8 = (unsigned char)90;
_Bool var_10 = (_Bool)0;
long long int var_12 = 2185328771728659216LL;
unsigned int var_13 = 4173778775U;
int zero = 0;
long long int var_14 = 371834252578697299LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)111;
unsigned long long int var_17 = 13178916539435260246ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
