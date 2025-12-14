#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15423746219212106483ULL;
unsigned int var_4 = 4097884592U;
unsigned int var_7 = 3835614182U;
signed char var_8 = (signed char)-115;
unsigned int var_9 = 2399439602U;
int var_10 = 1373889402;
unsigned short var_11 = (unsigned short)28367;
signed char var_12 = (signed char)-11;
unsigned char var_13 = (unsigned char)49;
long long int var_19 = 2101931941844205758LL;
int zero = 0;
long long int var_20 = 6329305850166237100LL;
unsigned char var_21 = (unsigned char)239;
void init() {
}

void checksum() {
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
