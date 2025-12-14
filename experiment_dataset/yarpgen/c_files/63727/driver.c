#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8606860924879833757LL;
short var_3 = (short)-6062;
unsigned int var_4 = 2889833385U;
short var_6 = (short)-12243;
int var_10 = -928576664;
unsigned int var_13 = 1923447563U;
long long int var_15 = -5394746686095825949LL;
int zero = 0;
unsigned int var_17 = 3298503894U;
unsigned short var_18 = (unsigned short)8727;
short var_19 = (short)27625;
unsigned char var_20 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
