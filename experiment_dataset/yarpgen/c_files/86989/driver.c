#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 338837262U;
long long int var_6 = 1942973626023444222LL;
unsigned char var_9 = (unsigned char)16;
unsigned int var_11 = 4222286559U;
long long int var_15 = 7472096154995791822LL;
unsigned long long int var_16 = 13795495922065294560ULL;
int zero = 0;
signed char var_17 = (signed char)-77;
short var_18 = (short)-3210;
unsigned short var_19 = (unsigned short)58914;
unsigned int var_20 = 2991158628U;
void init() {
}

void checksum() {
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
