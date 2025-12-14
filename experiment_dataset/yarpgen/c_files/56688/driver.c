#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13200616721929285176ULL;
unsigned short var_1 = (unsigned short)51082;
unsigned int var_4 = 2486652650U;
unsigned short var_6 = (unsigned short)47688;
unsigned char var_12 = (unsigned char)148;
signed char var_13 = (signed char)-69;
int zero = 0;
unsigned int var_16 = 2912645765U;
unsigned int var_17 = 3198947533U;
long long int var_18 = 3046648393569411300LL;
unsigned char var_19 = (unsigned char)115;
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
