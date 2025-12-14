#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56694;
signed char var_1 = (signed char)-90;
long long int var_5 = -4396345134599679385LL;
long long int var_7 = 1615033722368442471LL;
short var_13 = (short)31893;
unsigned char var_15 = (unsigned char)254;
int zero = 0;
unsigned int var_16 = 4112414944U;
unsigned long long int var_17 = 10633549897965555721ULL;
int var_18 = 898945200;
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
