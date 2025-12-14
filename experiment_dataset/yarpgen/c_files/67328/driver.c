#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2917752972U;
long long int var_1 = 3955296123349041752LL;
long long int var_2 = -8968466804776161161LL;
unsigned long long int var_3 = 17315261339609084492ULL;
_Bool var_4 = (_Bool)0;
long long int var_6 = -302661871627797306LL;
_Bool var_12 = (_Bool)0;
unsigned char var_16 = (unsigned char)218;
signed char var_19 = (signed char)-5;
int zero = 0;
int var_20 = -98277791;
short var_21 = (short)-10491;
long long int var_22 = 5898658929213666401LL;
int var_23 = -1388101938;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
