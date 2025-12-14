#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8926688332356280686ULL;
unsigned long long int var_5 = 8038722429802057577ULL;
signed char var_10 = (signed char)-70;
unsigned short var_11 = (unsigned short)37332;
long long int var_13 = 6163857120948446873LL;
unsigned int var_14 = 1901553798U;
int zero = 0;
unsigned long long int var_15 = 10939140146076339071ULL;
unsigned char var_16 = (unsigned char)29;
unsigned long long int var_17 = 2962339063167835765ULL;
void init() {
}

void checksum() {
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
