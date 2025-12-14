#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
signed char var_7 = (signed char)-34;
signed char var_8 = (signed char)120;
unsigned int var_10 = 2794424115U;
unsigned short var_11 = (unsigned short)50056;
unsigned short var_12 = (unsigned short)1634;
int var_13 = 1821230016;
int zero = 0;
unsigned short var_15 = (unsigned short)8140;
unsigned int var_16 = 3855690494U;
signed char var_17 = (signed char)35;
unsigned short var_18 = (unsigned short)62380;
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
