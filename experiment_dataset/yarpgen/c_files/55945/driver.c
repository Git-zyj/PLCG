#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5385;
unsigned int var_3 = 3724776227U;
int var_6 = -456219716;
int var_9 = -1038362906;
unsigned char var_11 = (unsigned char)42;
unsigned short var_12 = (unsigned short)34443;
unsigned char var_13 = (unsigned char)121;
int var_14 = -105118919;
unsigned short var_15 = (unsigned short)59945;
unsigned long long int var_16 = 13381487885660066292ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)44123;
unsigned short var_18 = (unsigned short)51026;
unsigned long long int var_19 = 14387617859961965611ULL;
unsigned long long int var_20 = 18095902839745416761ULL;
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
