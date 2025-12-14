#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1688264360U;
unsigned int var_3 = 1130574566U;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2284160260U;
unsigned int var_8 = 2693387108U;
int zero = 0;
unsigned int var_10 = 1968569156U;
unsigned short var_11 = (unsigned short)39594;
int var_12 = -297725844;
unsigned int var_13 = 3954401447U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
