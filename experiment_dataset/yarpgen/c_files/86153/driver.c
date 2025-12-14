#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
unsigned char var_1 = (unsigned char)146;
unsigned char var_2 = (unsigned char)58;
unsigned char var_5 = (unsigned char)238;
unsigned long long int var_6 = 11668252842430454686ULL;
unsigned long long int var_7 = 6489334566158061944ULL;
unsigned char var_8 = (unsigned char)31;
unsigned char var_9 = (unsigned char)39;
unsigned long long int var_10 = 9798455523041206688ULL;
unsigned long long int var_11 = 13693525960671671147ULL;
unsigned char var_12 = (unsigned char)125;
int zero = 0;
unsigned char var_13 = (unsigned char)222;
unsigned char var_14 = (unsigned char)201;
unsigned char var_15 = (unsigned char)159;
unsigned long long int var_16 = 9960220087120731743ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
