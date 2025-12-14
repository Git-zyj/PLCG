#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)14;
unsigned char var_3 = (unsigned char)104;
int var_4 = 1263434840;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)23076;
long long int var_9 = 8056908871351358663LL;
int var_10 = 930173830;
signed char var_11 = (signed char)-79;
unsigned short var_12 = (unsigned short)23010;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 9902139110283546303ULL;
unsigned long long int var_15 = 11722504922138586961ULL;
int var_16 = -1185772519;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)26452;
void init() {
}

void checksum() {
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
