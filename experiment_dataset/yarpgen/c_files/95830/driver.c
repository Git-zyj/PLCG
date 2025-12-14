#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27668;
unsigned short var_6 = (unsigned short)22198;
unsigned short var_7 = (unsigned short)5103;
int zero = 0;
unsigned long long int var_18 = 11155707369933500071ULL;
unsigned short var_19 = (unsigned short)27288;
unsigned char var_20 = (unsigned char)158;
void init() {
}

void checksum() {
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
