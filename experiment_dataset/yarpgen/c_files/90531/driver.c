#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4092149348166660419ULL;
short var_1 = (short)-24252;
unsigned long long int var_3 = 8506824546588252448ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_12 = 1219909674U;
signed char var_13 = (signed char)39;
int zero = 0;
signed char var_17 = (signed char)12;
signed char var_18 = (signed char)121;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
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
