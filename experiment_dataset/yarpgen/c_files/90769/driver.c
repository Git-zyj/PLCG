#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2427676820032450810ULL;
int var_3 = -1925324117;
short var_4 = (short)9520;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 631271536887027832ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-116;
unsigned char var_10 = (unsigned char)192;
long long int var_11 = -2801033948033153779LL;
unsigned char var_12 = (unsigned char)201;
int zero = 0;
unsigned long long int var_13 = 2423127867121771382ULL;
short var_14 = (short)-16205;
void init() {
}

void checksum() {
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
