#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1558;
int var_2 = 785895117;
_Bool var_3 = (_Bool)0;
int var_8 = -1688587584;
signed char var_9 = (signed char)(-127 - 1);
signed char var_13 = (signed char)40;
signed char var_14 = (signed char)-40;
unsigned long long int var_15 = 13360636899440028132ULL;
int zero = 0;
unsigned int var_17 = 1940888772U;
unsigned short var_18 = (unsigned short)34374;
short var_19 = (short)5549;
signed char var_20 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
