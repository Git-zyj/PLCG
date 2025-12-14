#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 668675611013846524LL;
unsigned long long int var_2 = 13531063192185574925ULL;
unsigned long long int var_3 = 3136107233538168869ULL;
unsigned short var_4 = (unsigned short)30618;
long long int var_8 = -9059933158824058835LL;
unsigned long long int var_9 = 3774961195730444472ULL;
unsigned short var_10 = (unsigned short)14081;
short var_11 = (short)-26535;
unsigned long long int var_12 = 8974453283250781641ULL;
int zero = 0;
long long int var_13 = -4346603977616773857LL;
int var_14 = -1027988409;
unsigned long long int var_15 = 389138095157047069ULL;
unsigned short var_16 = (unsigned short)26136;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
