#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1167931358U;
int var_4 = -1289670867;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)96;
int zero = 0;
int var_10 = -1906522495;
unsigned int var_11 = 3073035127U;
signed char var_12 = (signed char)-15;
unsigned short var_13 = (unsigned short)53372;
unsigned short var_14 = (unsigned short)14924;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
