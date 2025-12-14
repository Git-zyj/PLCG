#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6386146810254632644LL;
long long int var_2 = -2759283194783588306LL;
long long int var_4 = 2700329102300296548LL;
short var_7 = (short)2344;
unsigned char var_9 = (unsigned char)76;
long long int var_12 = 6913057791595240621LL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)50;
long long int var_15 = -3702740570220170573LL;
short var_17 = (short)6232;
unsigned int var_18 = 274127422U;
long long int var_19 = 5822899469922776208LL;
int zero = 0;
long long int var_20 = 4840960021790462220LL;
long long int var_21 = -8360129652645392261LL;
long long int var_22 = 408207806501209284LL;
signed char var_23 = (signed char)-118;
long long int var_24 = -8435711667332812367LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
