#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 58324724U;
unsigned short var_2 = (unsigned short)31699;
short var_3 = (short)-15252;
int var_4 = 1269510442;
unsigned short var_5 = (unsigned short)40847;
unsigned int var_6 = 1338751636U;
int zero = 0;
unsigned int var_10 = 206187594U;
unsigned int var_11 = 1160071217U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3631230906U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
