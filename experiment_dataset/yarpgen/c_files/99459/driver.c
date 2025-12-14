#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1042388557;
signed char var_1 = (signed char)28;
long long int var_2 = -7870135635092373561LL;
unsigned int var_4 = 4143800033U;
signed char var_5 = (signed char)-53;
long long int var_9 = -7989061463754760487LL;
signed char var_13 = (signed char)-80;
short var_17 = (short)20998;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int var_20 = 1034272862;
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
