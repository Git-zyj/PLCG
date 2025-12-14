#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 404536633U;
unsigned short var_1 = (unsigned short)35789;
unsigned int var_4 = 2885993194U;
unsigned short var_10 = (unsigned short)59735;
int zero = 0;
signed char var_11 = (signed char)11;
long long int var_12 = 103597409321380775LL;
int var_13 = -573808571;
signed char var_14 = (signed char)3;
long long int var_15 = -5267116325377561060LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
