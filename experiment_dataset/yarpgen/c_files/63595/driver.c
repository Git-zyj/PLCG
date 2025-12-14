#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25866;
_Bool var_2 = (_Bool)1;
short var_4 = (short)3703;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-13032;
_Bool var_7 = (_Bool)0;
short var_8 = (short)8629;
short var_9 = (short)12866;
int zero = 0;
short var_11 = (short)-26640;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
