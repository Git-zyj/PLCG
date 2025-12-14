#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3866332701U;
int var_5 = 1910151182;
unsigned char var_9 = (unsigned char)159;
signed char var_13 = (signed char)109;
unsigned char var_14 = (unsigned char)131;
unsigned short var_15 = (unsigned short)46550;
int zero = 0;
unsigned char var_19 = (unsigned char)190;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-114;
_Bool var_22 = (_Bool)0;
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
