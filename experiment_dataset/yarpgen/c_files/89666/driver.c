#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7115196415156660824LL;
unsigned long long int var_3 = 10087394810361130766ULL;
unsigned short var_4 = (unsigned short)41861;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 612352160U;
short var_11 = (short)6582;
int zero = 0;
short var_20 = (short)-24464;
signed char var_21 = (signed char)-94;
unsigned short var_22 = (unsigned short)63010;
void init() {
}

void checksum() {
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
