#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
short var_1 = (short)-28029;
short var_2 = (short)-30902;
unsigned long long int var_3 = 8691373656030112398ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)232;
signed char var_10 = (signed char)-37;
int zero = 0;
short var_13 = (short)-11155;
unsigned int var_14 = 2530028770U;
unsigned char var_15 = (unsigned char)181;
void init() {
}

void checksum() {
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
