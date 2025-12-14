#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1892270769;
long long int var_1 = -1768873147006964418LL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-60;
short var_6 = (short)-247;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)82;
int var_11 = 1392564333;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4988078810800210870ULL;
long long int var_16 = 2197359808103071550LL;
void init() {
}

void checksum() {
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
