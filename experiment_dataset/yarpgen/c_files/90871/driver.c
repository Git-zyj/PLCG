#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 342941497U;
unsigned char var_3 = (unsigned char)83;
signed char var_6 = (signed char)-46;
short var_7 = (short)-9042;
short var_8 = (short)-7087;
short var_10 = (short)-19253;
signed char var_12 = (signed char)-11;
unsigned long long int var_13 = 347781113257484515ULL;
long long int var_14 = -1059802011071670116LL;
int zero = 0;
signed char var_15 = (signed char)-111;
unsigned long long int var_16 = 1168928067559660091ULL;
unsigned long long int var_17 = 4045112678773255479ULL;
unsigned long long int var_18 = 3817529768826021731ULL;
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
