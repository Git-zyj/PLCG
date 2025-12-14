#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3076026662406068886LL;
unsigned long long int var_4 = 4438114695303839004ULL;
long long int var_6 = -7647752630788732040LL;
unsigned char var_8 = (unsigned char)221;
int var_9 = 1160221487;
unsigned short var_10 = (unsigned short)12081;
unsigned long long int var_13 = 3893089884791881930ULL;
unsigned short var_14 = (unsigned short)56059;
long long int var_15 = 4172999019605972538LL;
int zero = 0;
short var_16 = (short)3411;
int var_17 = 1993301998;
unsigned short var_18 = (unsigned short)12398;
void init() {
}

void checksum() {
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
