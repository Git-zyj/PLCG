#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6119079235486978237ULL;
short var_3 = (short)5624;
short var_4 = (short)27450;
unsigned char var_6 = (unsigned char)176;
unsigned char var_10 = (unsigned char)203;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)95;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)208;
short var_19 = (short)-13890;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
