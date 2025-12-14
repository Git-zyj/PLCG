#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)128;
long long int var_9 = -3360492791240576422LL;
unsigned short var_10 = (unsigned short)18335;
unsigned char var_12 = (unsigned char)142;
unsigned short var_13 = (unsigned short)64238;
int zero = 0;
signed char var_14 = (signed char)-96;
unsigned char var_15 = (unsigned char)79;
unsigned char var_16 = (unsigned char)25;
long long int var_17 = -1138557821029060321LL;
void init() {
}

void checksum() {
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
