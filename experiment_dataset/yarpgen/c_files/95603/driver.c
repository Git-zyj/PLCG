#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2372658325U;
signed char var_2 = (signed char)-96;
unsigned int var_3 = 1584979839U;
unsigned long long int var_4 = 13971738871335731801ULL;
unsigned int var_9 = 1373274227U;
unsigned int var_10 = 4294539033U;
unsigned int var_11 = 1918204904U;
unsigned char var_12 = (unsigned char)89;
short var_14 = (short)30659;
int zero = 0;
unsigned long long int var_15 = 3519663752445591763ULL;
unsigned short var_16 = (unsigned short)27174;
short var_17 = (short)24679;
signed char var_18 = (signed char)-126;
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
