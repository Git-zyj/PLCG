#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11152887681712583703ULL;
unsigned int var_1 = 2765266596U;
unsigned short var_3 = (unsigned short)23472;
unsigned char var_4 = (unsigned char)245;
unsigned char var_5 = (unsigned char)111;
long long int var_6 = 825236797811719036LL;
unsigned char var_7 = (unsigned char)117;
unsigned short var_9 = (unsigned short)25340;
signed char var_12 = (signed char)107;
int zero = 0;
short var_13 = (short)7311;
short var_14 = (short)7660;
unsigned long long int var_15 = 12696540725564171945ULL;
unsigned short var_16 = (unsigned short)32739;
unsigned char var_17 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
