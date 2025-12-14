#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12309941659275270840ULL;
short var_8 = (short)23627;
_Bool var_9 = (_Bool)0;
int var_10 = -737697884;
unsigned long long int var_11 = 7244007913329067706ULL;
unsigned short var_13 = (unsigned short)58889;
int zero = 0;
unsigned short var_16 = (unsigned short)14440;
unsigned long long int var_17 = 2739720868872345830ULL;
signed char var_18 = (signed char)-55;
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
