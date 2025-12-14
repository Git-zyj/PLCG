#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14113773088790084190ULL;
unsigned int var_1 = 4202528831U;
unsigned char var_2 = (unsigned char)117;
long long int var_3 = -3707908734560203519LL;
unsigned int var_10 = 3218102691U;
unsigned char var_11 = (unsigned char)80;
unsigned int var_12 = 3149482002U;
int zero = 0;
short var_13 = (short)19507;
int var_14 = -1797034255;
unsigned char var_15 = (unsigned char)187;
int var_16 = 22151558;
signed char var_17 = (signed char)28;
unsigned char var_18 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
