#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-38;
short var_5 = (short)-17640;
signed char var_7 = (signed char)-35;
short var_9 = (short)-8516;
int var_10 = 2094541724;
int zero = 0;
long long int var_11 = 2256185247612698883LL;
short var_12 = (short)18571;
unsigned short var_13 = (unsigned short)13719;
signed char var_14 = (signed char)5;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
