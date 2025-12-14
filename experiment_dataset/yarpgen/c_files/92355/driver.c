#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
signed char var_5 = (signed char)-67;
unsigned short var_6 = (unsigned short)7713;
unsigned char var_7 = (unsigned char)121;
short var_10 = (short)13271;
signed char var_11 = (signed char)-122;
unsigned long long int var_12 = 15682455798096503976ULL;
int zero = 0;
int var_13 = -828020698;
unsigned long long int var_14 = 7461490863452176569ULL;
void init() {
}

void checksum() {
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
