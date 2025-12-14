#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
long long int var_2 = 6622000241983521726LL;
int var_12 = -1246526637;
int zero = 0;
unsigned long long int var_13 = 1088759177361403269ULL;
unsigned long long int var_14 = 13354415579335701822ULL;
unsigned short var_15 = (unsigned short)17429;
int var_16 = -873267959;
int var_17 = -164984587;
unsigned long long int var_18 = 4697770167587931987ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
