#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41950;
unsigned char var_2 = (unsigned char)48;
_Bool var_3 = (_Bool)0;
signed char var_11 = (signed char)-118;
unsigned int var_14 = 3901150018U;
unsigned char var_15 = (unsigned char)186;
unsigned short var_17 = (unsigned short)65074;
int zero = 0;
unsigned char var_19 = (unsigned char)129;
int var_20 = 1923974165;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 6066834326929787277ULL;
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
