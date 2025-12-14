#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18110508161964217323ULL;
unsigned int var_1 = 1106649696U;
long long int var_2 = 5098705245830997083LL;
unsigned int var_3 = 3125595528U;
unsigned short var_4 = (unsigned short)2167;
int var_6 = 683350761;
signed char var_11 = (signed char)61;
unsigned short var_12 = (unsigned short)15155;
unsigned long long int var_13 = 15044237203848301460ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6067968773463808131LL;
unsigned int var_18 = 534145903U;
unsigned int var_19 = 3464242232U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
