#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
unsigned long long int var_5 = 14881817004829837929ULL;
signed char var_6 = (signed char)-88;
signed char var_8 = (signed char)-83;
int zero = 0;
unsigned long long int var_10 = 9794296951221656684ULL;
unsigned short var_11 = (unsigned short)12896;
int var_12 = -52490060;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
