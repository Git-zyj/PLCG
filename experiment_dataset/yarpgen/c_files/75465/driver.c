#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4148330505486696713ULL;
unsigned short var_1 = (unsigned short)56807;
_Bool var_2 = (_Bool)0;
int var_3 = -1989890192;
_Bool var_4 = (_Bool)1;
int var_5 = 1020359890;
unsigned long long int var_6 = 7567189160436585479ULL;
signed char var_7 = (signed char)-99;
signed char var_8 = (signed char)58;
unsigned int var_9 = 1805405426U;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)125;
unsigned short var_12 = (unsigned short)31293;
unsigned long long int var_13 = 871070561538637483ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
