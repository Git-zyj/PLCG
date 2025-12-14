#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34372;
unsigned char var_5 = (unsigned char)67;
signed char var_8 = (signed char)31;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)11697;
signed char var_14 = (signed char)-5;
int zero = 0;
long long int var_15 = 6169999291458929849LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1597000976U;
long long int var_18 = -6337590833576536368LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
