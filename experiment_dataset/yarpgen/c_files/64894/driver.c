#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2896475710U;
int var_1 = -407649605;
int var_2 = -1671896345;
short var_4 = (short)23667;
unsigned char var_6 = (unsigned char)187;
signed char var_7 = (signed char)116;
unsigned int var_10 = 3161432042U;
unsigned long long int var_12 = 1229017308435575885ULL;
short var_13 = (short)28583;
unsigned int var_14 = 3629441323U;
signed char var_15 = (signed char)-1;
unsigned long long int var_16 = 20155890860584964ULL;
int var_17 = -813861762;
int zero = 0;
unsigned short var_18 = (unsigned short)59895;
int var_19 = 849304051;
unsigned int var_20 = 403061597U;
short var_21 = (short)-2700;
short var_22 = (short)22733;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
