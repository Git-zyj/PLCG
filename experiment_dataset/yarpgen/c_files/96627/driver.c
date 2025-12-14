#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3341699789U;
long long int var_2 = 8789193091890813593LL;
short var_3 = (short)19096;
long long int var_4 = -5740229939067439547LL;
unsigned char var_8 = (unsigned char)135;
unsigned int var_9 = 3642167655U;
signed char var_11 = (signed char)-77;
signed char var_12 = (signed char)75;
int zero = 0;
signed char var_13 = (signed char)120;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)35690;
unsigned int var_16 = 1934274278U;
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
