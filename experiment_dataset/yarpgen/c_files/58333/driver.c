#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7608361004028046480LL;
unsigned short var_6 = (unsigned short)14452;
short var_8 = (short)12543;
short var_10 = (short)19772;
short var_12 = (short)-7836;
int zero = 0;
unsigned int var_13 = 3133470591U;
signed char var_14 = (signed char)121;
unsigned int var_15 = 4263685527U;
void init() {
}

void checksum() {
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
