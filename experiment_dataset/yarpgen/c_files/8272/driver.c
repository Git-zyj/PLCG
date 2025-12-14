#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)212;
int var_4 = -1501779198;
int var_5 = 439230459;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 85276238U;
unsigned char var_10 = (unsigned char)232;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-5238;
unsigned long long int var_14 = 18243482131760305969ULL;
long long int var_15 = -319359607473603568LL;
void init() {
}

void checksum() {
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
