#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 9072159297382415785LL;
unsigned long long int var_9 = 13288564836402674487ULL;
unsigned int var_12 = 4212665464U;
int var_14 = -712254220;
unsigned short var_15 = (unsigned short)43461;
unsigned long long int var_18 = 6732536998795430089ULL;
int zero = 0;
unsigned long long int var_20 = 4713066940883851937ULL;
unsigned int var_21 = 4193479216U;
short var_22 = (short)-12459;
unsigned int var_23 = 1142739933U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
