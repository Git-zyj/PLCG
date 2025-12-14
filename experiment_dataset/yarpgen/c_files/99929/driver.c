#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)212;
unsigned long long int var_5 = 14812648996308127973ULL;
unsigned long long int var_7 = 770966705750895702ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1640431566U;
unsigned char var_11 = (unsigned char)30;
unsigned char var_12 = (unsigned char)168;
int zero = 0;
unsigned int var_14 = 916542503U;
unsigned int var_15 = 3422012184U;
unsigned int var_16 = 3259748054U;
void init() {
}

void checksum() {
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
