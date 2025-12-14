#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1406815696U;
signed char var_1 = (signed char)-74;
long long int var_3 = 5443572204304000489LL;
signed char var_4 = (signed char)-68;
unsigned char var_7 = (unsigned char)103;
signed char var_9 = (signed char)-67;
unsigned long long int var_10 = 7602845399496177233ULL;
unsigned int var_12 = 846632246U;
unsigned char var_13 = (unsigned char)160;
signed char var_14 = (signed char)46;
int zero = 0;
int var_15 = -125634004;
unsigned char var_16 = (unsigned char)15;
long long int var_17 = -4311129708698643101LL;
unsigned int var_18 = 181902406U;
void init() {
}

void checksum() {
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
