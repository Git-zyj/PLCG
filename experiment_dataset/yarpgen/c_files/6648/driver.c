#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)80;
unsigned long long int var_2 = 8827568698519852635ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_12 = 16362285008241042133ULL;
unsigned long long int var_13 = 14497393777842512781ULL;
short var_14 = (short)11299;
unsigned int var_16 = 4229064645U;
int zero = 0;
unsigned char var_17 = (unsigned char)217;
_Bool var_18 = (_Bool)1;
int var_19 = 1058157599;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
