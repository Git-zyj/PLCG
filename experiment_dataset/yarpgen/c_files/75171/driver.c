#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6028755309712254167LL;
unsigned short var_7 = (unsigned short)6940;
unsigned short var_12 = (unsigned short)57003;
unsigned char var_15 = (unsigned char)172;
int var_16 = -637460857;
int zero = 0;
int var_19 = -2027897729;
unsigned char var_20 = (unsigned char)18;
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
