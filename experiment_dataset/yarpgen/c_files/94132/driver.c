#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
unsigned int var_2 = 1420048406U;
unsigned long long int var_5 = 5918146734642661167ULL;
signed char var_6 = (signed char)75;
signed char var_9 = (signed char)106;
long long int var_11 = 8944821616551256927LL;
short var_13 = (short)-1450;
int zero = 0;
unsigned char var_14 = (unsigned char)242;
signed char var_15 = (signed char)89;
unsigned long long int var_16 = 13259310155859046985ULL;
unsigned long long int var_17 = 4663017778036080871ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
