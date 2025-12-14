#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6334019119562983469LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 17359791286126098941ULL;
unsigned short var_7 = (unsigned short)59570;
signed char var_8 = (signed char)-101;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-38;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3348352648340638682LL;
unsigned int var_17 = 697669596U;
unsigned long long int var_18 = 158595916307436132ULL;
int zero = 0;
short var_20 = (short)-9684;
short var_21 = (short)1101;
unsigned int var_22 = 3720988250U;
void init() {
}

void checksum() {
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
