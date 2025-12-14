#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18261;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)19;
short var_5 = (short)3541;
unsigned int var_6 = 1647508643U;
unsigned long long int var_7 = 1141082489873205686ULL;
long long int var_8 = -7320261280489570589LL;
unsigned int var_9 = 269189599U;
int zero = 0;
unsigned int var_10 = 3665516713U;
short var_11 = (short)28074;
unsigned short var_12 = (unsigned short)50601;
long long int var_13 = -5716773725918161663LL;
signed char var_14 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
