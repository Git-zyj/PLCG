#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2204493139873174574LL;
int var_1 = 1801644478;
signed char var_2 = (signed char)-57;
long long int var_3 = -2884716230276182217LL;
unsigned short var_4 = (unsigned short)33885;
long long int var_6 = 1731883720719073171LL;
unsigned int var_7 = 2729204776U;
unsigned int var_8 = 2367301054U;
unsigned short var_9 = (unsigned short)65312;
signed char var_10 = (signed char)-28;
short var_11 = (short)-8193;
int zero = 0;
unsigned long long int var_12 = 538729801642786548ULL;
unsigned long long int var_13 = 3209337110293416984ULL;
unsigned long long int var_14 = 12593781066415483184ULL;
int var_15 = -594549178;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
