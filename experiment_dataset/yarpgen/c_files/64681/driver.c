#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1461966049;
unsigned short var_1 = (unsigned short)41927;
unsigned short var_2 = (unsigned short)42566;
unsigned short var_3 = (unsigned short)19803;
unsigned short var_4 = (unsigned short)10912;
short var_5 = (short)-11142;
unsigned long long int var_6 = 12345212020849734796ULL;
int zero = 0;
signed char var_11 = (signed char)-12;
long long int var_12 = 8600526646946858810LL;
int var_13 = -1386040101;
signed char var_14 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
