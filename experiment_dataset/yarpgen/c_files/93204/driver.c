#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 477599989;
unsigned short var_2 = (unsigned short)3438;
signed char var_7 = (signed char)-21;
unsigned short var_9 = (unsigned short)5254;
unsigned short var_10 = (unsigned short)25112;
long long int var_15 = -2437131775949007783LL;
int zero = 0;
signed char var_16 = (signed char)-72;
unsigned short var_17 = (unsigned short)51094;
unsigned long long int var_18 = 3773838313062694761ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
