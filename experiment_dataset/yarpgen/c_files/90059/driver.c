#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32565;
unsigned char var_2 = (unsigned char)133;
unsigned short var_3 = (unsigned short)56036;
unsigned long long int var_4 = 13580624990563597128ULL;
signed char var_5 = (signed char)-14;
unsigned long long int var_6 = 8497409198568393944ULL;
unsigned int var_8 = 1044596359U;
unsigned char var_9 = (unsigned char)42;
int zero = 0;
unsigned int var_11 = 1120845336U;
unsigned short var_12 = (unsigned short)62648;
unsigned int var_13 = 3179430992U;
unsigned int var_14 = 2234197187U;
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
