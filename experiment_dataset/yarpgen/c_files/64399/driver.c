#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17333;
unsigned long long int var_3 = 2143892838220495564ULL;
unsigned short var_4 = (unsigned short)48916;
unsigned short var_7 = (unsigned short)44940;
unsigned long long int var_9 = 14352952204763075298ULL;
unsigned char var_10 = (unsigned char)60;
int zero = 0;
signed char var_14 = (signed char)75;
short var_15 = (short)-1654;
unsigned long long int var_16 = 11146889547800914151ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
