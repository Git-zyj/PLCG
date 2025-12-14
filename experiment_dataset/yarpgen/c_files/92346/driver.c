#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 837336872U;
signed char var_6 = (signed char)-2;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 11468455412431615573ULL;
long long int var_15 = 5324658863530184946LL;
long long int var_16 = 3979303468255509058LL;
int zero = 0;
unsigned char var_18 = (unsigned char)207;
short var_19 = (short)-22534;
short var_20 = (short)3247;
unsigned int var_21 = 2512756746U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
