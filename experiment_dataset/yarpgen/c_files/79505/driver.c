#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-93;
long long int var_2 = -7988633820343955473LL;
unsigned int var_6 = 4090158803U;
unsigned int var_7 = 1241983868U;
unsigned char var_10 = (unsigned char)63;
unsigned int var_12 = 3920424368U;
int zero = 0;
unsigned long long int var_13 = 11674280677714413776ULL;
int var_14 = 74399195;
unsigned long long int var_15 = 7862086570840652481ULL;
unsigned int var_16 = 3942373083U;
unsigned char var_17 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
