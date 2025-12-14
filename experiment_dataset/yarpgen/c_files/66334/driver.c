#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
unsigned long long int var_3 = 9669253198106678988ULL;
signed char var_4 = (signed char)68;
unsigned short var_6 = (unsigned short)27910;
unsigned short var_9 = (unsigned short)144;
unsigned int var_10 = 3925853960U;
int var_12 = -1067956647;
unsigned short var_14 = (unsigned short)55726;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-31;
unsigned int var_21 = 2800620108U;
int var_22 = -8204352;
_Bool var_23 = (_Bool)1;
int var_24 = -1146188491;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
