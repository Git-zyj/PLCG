#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2871238669U;
unsigned int var_4 = 322309348U;
unsigned char var_7 = (unsigned char)207;
unsigned long long int var_9 = 16806844501814514157ULL;
unsigned short var_10 = (unsigned short)49874;
int var_11 = 1774613787;
long long int var_12 = 2218403168226660871LL;
unsigned char var_13 = (unsigned char)43;
int zero = 0;
int var_14 = -1988451974;
signed char var_15 = (signed char)-19;
unsigned int var_16 = 3904111421U;
void init() {
}

void checksum() {
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
