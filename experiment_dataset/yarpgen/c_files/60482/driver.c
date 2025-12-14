#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)51;
unsigned int var_2 = 1935607702U;
long long int var_3 = -8314930814746595057LL;
int var_4 = 2127597997;
long long int var_5 = 6311018591116943542LL;
unsigned int var_7 = 756831728U;
signed char var_8 = (signed char)-69;
unsigned long long int var_9 = 10466195813131762188ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 664096900U;
unsigned int var_12 = 2408999250U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
