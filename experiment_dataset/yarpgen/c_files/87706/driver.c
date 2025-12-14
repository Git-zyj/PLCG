#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -55853308;
long long int var_2 = 634045768120935248LL;
signed char var_3 = (signed char)-29;
signed char var_6 = (signed char)-25;
unsigned char var_9 = (unsigned char)173;
unsigned short var_10 = (unsigned short)41252;
unsigned char var_11 = (unsigned char)5;
int zero = 0;
signed char var_16 = (signed char)-41;
unsigned short var_17 = (unsigned short)20997;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
