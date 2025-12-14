#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2978443291430599656ULL;
signed char var_7 = (signed char)-29;
signed char var_8 = (signed char)-81;
unsigned long long int var_9 = 1200689401639846398ULL;
short var_10 = (short)4973;
int var_11 = 170972044;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-82;
int zero = 0;
short var_16 = (short)5092;
int var_17 = 542594236;
short var_18 = (short)29050;
void init() {
}

void checksum() {
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
