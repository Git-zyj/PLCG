#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)253;
short var_2 = (short)-8914;
int var_3 = -86959538;
unsigned long long int var_4 = 11242622912029047750ULL;
unsigned long long int var_5 = 4647630656294059832ULL;
unsigned int var_6 = 1563183629U;
unsigned char var_15 = (unsigned char)154;
int zero = 0;
short var_16 = (short)23307;
unsigned int var_17 = 1956579298U;
unsigned char var_18 = (unsigned char)164;
unsigned char var_19 = (unsigned char)59;
unsigned int var_20 = 683377264U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
