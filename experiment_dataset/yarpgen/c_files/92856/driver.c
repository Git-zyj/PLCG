#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)415;
unsigned char var_4 = (unsigned char)64;
int var_5 = -92022773;
unsigned long long int var_6 = 11145995473952110702ULL;
unsigned long long int var_8 = 9925166033260640562ULL;
unsigned short var_12 = (unsigned short)27661;
unsigned int var_17 = 3117011665U;
int zero = 0;
unsigned int var_20 = 421128318U;
unsigned short var_21 = (unsigned short)23389;
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
