#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
short var_2 = (short)-25722;
unsigned int var_3 = 1128809870U;
unsigned int var_5 = 524918705U;
signed char var_6 = (signed char)95;
unsigned long long int var_8 = 7823460702782737887ULL;
unsigned long long int var_10 = 16686914294251691191ULL;
unsigned long long int var_11 = 13131281233035345612ULL;
short var_13 = (short)3160;
long long int var_14 = 4161030826746651654LL;
signed char var_15 = (signed char)-93;
int zero = 0;
int var_17 = 183270083;
long long int var_18 = -2226755614287738535LL;
void init() {
}

void checksum() {
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
