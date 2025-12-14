#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1423172543;
unsigned char var_4 = (unsigned char)73;
long long int var_6 = 2086803825880986295LL;
int var_9 = -1582346372;
unsigned char var_11 = (unsigned char)244;
unsigned int var_15 = 583002687U;
unsigned char var_18 = (unsigned char)78;
int zero = 0;
signed char var_19 = (signed char)120;
unsigned long long int var_20 = 13125550325897959571ULL;
unsigned long long int var_21 = 1919981832008638661ULL;
short var_22 = (short)14318;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
