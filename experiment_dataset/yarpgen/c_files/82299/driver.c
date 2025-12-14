#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2286834050U;
unsigned int var_2 = 1324928577U;
unsigned long long int var_5 = 5621158440096132306ULL;
unsigned long long int var_8 = 6162428716617150030ULL;
unsigned int var_9 = 3984759828U;
signed char var_10 = (signed char)-23;
unsigned char var_11 = (unsigned char)23;
int var_12 = -1420110381;
int zero = 0;
signed char var_14 = (signed char)-25;
unsigned long long int var_15 = 17069885103356828898ULL;
unsigned short var_16 = (unsigned short)14567;
unsigned long long int var_17 = 6527974213643549803ULL;
unsigned int var_18 = 2676871133U;
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
