#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4913263284351491802LL;
unsigned short var_2 = (unsigned short)13194;
unsigned char var_8 = (unsigned char)139;
long long int var_11 = 5276678002815311159LL;
unsigned long long int var_12 = 340283751502928111ULL;
unsigned short var_13 = (unsigned short)7503;
int zero = 0;
signed char var_14 = (signed char)-79;
unsigned long long int var_15 = 2853140386237924831ULL;
short var_16 = (short)-23903;
signed char var_17 = (signed char)65;
unsigned char var_18 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
