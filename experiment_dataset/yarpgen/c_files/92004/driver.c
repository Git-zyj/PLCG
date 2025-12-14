#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5272851696303976046LL;
unsigned long long int var_2 = 17137824426946577084ULL;
long long int var_3 = 3703447091965044116LL;
short var_4 = (short)29484;
unsigned long long int var_5 = 18323727524538305833ULL;
signed char var_7 = (signed char)-28;
int zero = 0;
short var_11 = (short)7680;
_Bool var_12 = (_Bool)0;
long long int var_13 = 7876317595948985481LL;
short var_14 = (short)-12129;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
