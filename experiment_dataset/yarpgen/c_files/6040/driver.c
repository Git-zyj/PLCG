#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20056;
unsigned long long int var_3 = 13678872644688364250ULL;
unsigned short var_12 = (unsigned short)46862;
signed char var_13 = (signed char)-34;
int zero = 0;
unsigned char var_15 = (unsigned char)9;
unsigned long long int var_16 = 1704713433880380048ULL;
unsigned long long int var_17 = 3621430859684330011ULL;
long long int var_18 = 390353945691710936LL;
long long int var_19 = 8472174930226709491LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
