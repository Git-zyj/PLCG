#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1883969378U;
unsigned long long int var_6 = 4834620235659601883ULL;
unsigned int var_8 = 2556335593U;
unsigned int var_11 = 3649582594U;
unsigned char var_12 = (unsigned char)225;
unsigned int var_14 = 478816273U;
int zero = 0;
short var_18 = (short)20279;
signed char var_19 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
