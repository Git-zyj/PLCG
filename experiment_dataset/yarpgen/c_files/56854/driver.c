#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)41916;
signed char var_6 = (signed char)77;
_Bool var_7 = (_Bool)0;
int var_8 = -1874460354;
long long int var_9 = 2036056181813536711LL;
unsigned long long int var_10 = 2967430259991676256ULL;
short var_14 = (short)-31074;
int var_16 = -2094176289;
short var_17 = (short)-28879;
int zero = 0;
unsigned long long int var_19 = 2226538363025895137ULL;
signed char var_20 = (signed char)-73;
unsigned long long int var_21 = 1597959101671851513ULL;
signed char var_22 = (signed char)70;
void init() {
}

void checksum() {
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
