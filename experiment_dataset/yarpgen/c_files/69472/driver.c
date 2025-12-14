#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 13960152361886622065ULL;
unsigned long long int var_4 = 4893482097171945670ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 3961673707643190703ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)56830;
unsigned char var_14 = (unsigned char)81;
unsigned long long int var_15 = 13338485821810349234ULL;
short var_16 = (short)8208;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
