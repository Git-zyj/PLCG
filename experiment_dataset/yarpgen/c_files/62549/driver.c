#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)163;
unsigned char var_3 = (unsigned char)95;
unsigned int var_6 = 133374450U;
unsigned int var_8 = 1519947891U;
short var_9 = (short)-15111;
unsigned long long int var_10 = 16553271697243330639ULL;
unsigned long long int var_12 = 17091472903164644399ULL;
unsigned int var_13 = 1557097144U;
unsigned char var_14 = (unsigned char)177;
unsigned int var_15 = 3697451652U;
int zero = 0;
short var_16 = (short)-15986;
int var_17 = 517323122;
int var_18 = 1555398648;
int var_19 = 384593591;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
