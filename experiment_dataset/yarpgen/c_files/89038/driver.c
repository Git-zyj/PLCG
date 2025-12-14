#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7416;
int var_1 = 1786815851;
int var_3 = -2022376855;
signed char var_4 = (signed char)127;
int var_6 = 804445713;
unsigned short var_7 = (unsigned short)58378;
unsigned short var_8 = (unsigned short)38968;
unsigned short var_9 = (unsigned short)40836;
unsigned long long int var_10 = 12885835490045377286ULL;
long long int var_11 = 8330578109694880443LL;
int zero = 0;
short var_12 = (short)-5618;
unsigned int var_13 = 1114084012U;
short var_14 = (short)-479;
signed char var_15 = (signed char)-37;
int var_16 = 1923553071;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
