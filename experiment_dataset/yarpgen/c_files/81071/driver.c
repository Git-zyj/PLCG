#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2948557423410405680LL;
signed char var_6 = (signed char)-88;
signed char var_7 = (signed char)-92;
unsigned long long int var_8 = 5566047626255690584ULL;
unsigned long long int var_15 = 2898637995746066607ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)5630;
long long int var_17 = -7113906168725941132LL;
void init() {
}

void checksum() {
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
