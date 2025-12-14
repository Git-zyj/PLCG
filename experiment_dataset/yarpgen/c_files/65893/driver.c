#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2973711011U;
unsigned char var_3 = (unsigned char)193;
_Bool var_5 = (_Bool)1;
unsigned int var_10 = 1398968730U;
long long int var_11 = -4989952410446490803LL;
long long int var_14 = 583493132801440093LL;
int var_16 = -1706895274;
int zero = 0;
int var_18 = 758139880;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3075240927U;
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
