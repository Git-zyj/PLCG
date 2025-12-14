#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1781;
unsigned long long int var_1 = 3923848802113337103ULL;
int var_3 = -1895728647;
unsigned long long int var_5 = 8773147115936050289ULL;
unsigned long long int var_6 = 17440949200085879400ULL;
signed char var_9 = (signed char)-83;
signed char var_10 = (signed char)-15;
int zero = 0;
int var_12 = -522837882;
signed char var_13 = (signed char)-12;
unsigned int var_14 = 875618774U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
