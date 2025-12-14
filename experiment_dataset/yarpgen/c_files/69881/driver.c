#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30262;
unsigned short var_3 = (unsigned short)9254;
long long int var_4 = -345372398019820631LL;
long long int var_6 = -1719615242197131723LL;
unsigned short var_11 = (unsigned short)59779;
unsigned short var_13 = (unsigned short)63314;
unsigned char var_16 = (unsigned char)241;
unsigned long long int var_17 = 13444739227346192913ULL;
int zero = 0;
short var_19 = (short)-21552;
long long int var_20 = -6695273212514055302LL;
void init() {
}

void checksum() {
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
