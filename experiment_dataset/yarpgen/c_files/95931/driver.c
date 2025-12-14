#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 471851051U;
short var_2 = (short)-18305;
unsigned short var_5 = (unsigned short)14731;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-29154;
unsigned long long int var_8 = 11117539224499490126ULL;
int zero = 0;
signed char var_10 = (signed char)60;
signed char var_11 = (signed char)-116;
_Bool var_12 = (_Bool)0;
long long int var_13 = -6504969353462280492LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
