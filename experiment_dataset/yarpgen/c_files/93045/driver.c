#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)255;
signed char var_9 = (signed char)-99;
unsigned int var_16 = 3571108856U;
int zero = 0;
short var_18 = (short)1434;
long long int var_19 = -2696623399218312410LL;
signed char var_20 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
