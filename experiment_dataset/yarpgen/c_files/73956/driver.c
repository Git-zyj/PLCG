#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5943570362197552907LL;
signed char var_6 = (signed char)-111;
unsigned int var_9 = 209763972U;
int zero = 0;
unsigned short var_15 = (unsigned short)54221;
unsigned char var_16 = (unsigned char)106;
short var_17 = (short)-30172;
long long int var_18 = -4218732557455109775LL;
void init() {
}

void checksum() {
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
