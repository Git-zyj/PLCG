#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 948307569;
int var_5 = 1843972079;
unsigned short var_6 = (unsigned short)11870;
unsigned short var_7 = (unsigned short)14968;
unsigned long long int var_8 = 12872815889197663840ULL;
unsigned char var_13 = (unsigned char)135;
unsigned long long int var_17 = 846288594410135841ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)37720;
int var_19 = -1426092066;
signed char var_20 = (signed char)-55;
unsigned long long int var_21 = 6341844188683940474ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
