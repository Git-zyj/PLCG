#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20076;
_Bool var_3 = (_Bool)0;
signed char var_10 = (signed char)-29;
int var_11 = -38200926;
unsigned int var_13 = 2388340701U;
int var_14 = -803659216;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-11784;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
