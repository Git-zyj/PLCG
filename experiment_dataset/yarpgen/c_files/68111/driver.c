#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6030977929408553235LL;
signed char var_5 = (signed char)-29;
long long int var_7 = 6961940868217826675LL;
short var_8 = (short)23662;
unsigned char var_10 = (unsigned char)95;
int var_11 = -808031431;
int zero = 0;
signed char var_12 = (signed char)-15;
signed char var_13 = (signed char)95;
signed char var_14 = (signed char)-29;
long long int var_15 = -6890154185458853537LL;
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
