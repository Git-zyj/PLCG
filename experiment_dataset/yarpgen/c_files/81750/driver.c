#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7939166604642124502ULL;
short var_4 = (short)24663;
unsigned int var_7 = 987773719U;
unsigned int var_8 = 559080601U;
int var_9 = -1407235267;
unsigned char var_10 = (unsigned char)222;
int zero = 0;
int var_13 = -612363852;
signed char var_14 = (signed char)125;
unsigned short var_15 = (unsigned short)33091;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
