#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-49;
unsigned int var_2 = 2836885882U;
unsigned short var_5 = (unsigned short)18703;
signed char var_6 = (signed char)57;
unsigned char var_7 = (unsigned char)166;
int var_9 = -845044917;
signed char var_10 = (signed char)3;
unsigned long long int var_12 = 1294670946463228997ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13526121465976949921ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)43821;
unsigned short var_17 = (unsigned short)3173;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
