#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3526;
unsigned long long int var_1 = 7787876979856717958ULL;
short var_5 = (short)29698;
long long int var_10 = 5525993070767672183LL;
unsigned int var_11 = 1052863845U;
long long int var_12 = -2688973933077095355LL;
long long int var_13 = 2499717346118167799LL;
int zero = 0;
long long int var_14 = 6225951640526733174LL;
long long int var_15 = 5073270362762981646LL;
short var_16 = (short)27339;
unsigned short var_17 = (unsigned short)64657;
long long int var_18 = -7095546000632184677LL;
void init() {
}

void checksum() {
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
