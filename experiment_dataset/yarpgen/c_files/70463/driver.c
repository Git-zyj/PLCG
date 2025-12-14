#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1945984472;
unsigned char var_1 = (unsigned char)142;
unsigned short var_2 = (unsigned short)14647;
unsigned int var_4 = 687893814U;
signed char var_7 = (signed char)-26;
long long int var_11 = -8980677743334837204LL;
int zero = 0;
long long int var_12 = 5926656588007092128LL;
unsigned short var_13 = (unsigned short)45616;
int var_14 = 331000133;
void init() {
}

void checksum() {
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
