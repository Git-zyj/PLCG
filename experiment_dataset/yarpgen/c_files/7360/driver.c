#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -617249453;
unsigned long long int var_3 = 3871982125460044028ULL;
unsigned char var_5 = (unsigned char)168;
long long int var_9 = 2245806933984243127LL;
int zero = 0;
short var_13 = (short)12519;
int var_14 = 1650084495;
int var_15 = -1213045942;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
