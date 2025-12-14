#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-10699;
unsigned long long int var_8 = 13591117733344766609ULL;
signed char var_9 = (signed char)53;
signed char var_10 = (signed char)-21;
long long int var_12 = 37980595402801643LL;
long long int var_16 = -7519818208838641011LL;
int zero = 0;
int var_17 = 1253392000;
short var_18 = (short)-10963;
unsigned long long int var_19 = 8430142993413835954ULL;
void init() {
}

void checksum() {
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
