#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)82;
signed char var_2 = (signed char)45;
int var_12 = 691492924;
unsigned long long int var_13 = 9904446309743418893ULL;
unsigned long long int var_14 = 5527885640889488666ULL;
int var_15 = -501373417;
int zero = 0;
unsigned short var_16 = (unsigned short)38707;
short var_17 = (short)4053;
unsigned char var_18 = (unsigned char)1;
unsigned short var_19 = (unsigned short)59237;
unsigned short var_20 = (unsigned short)60338;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
