#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 614668446681953929ULL;
unsigned char var_11 = (unsigned char)254;
int zero = 0;
unsigned short var_20 = (unsigned short)33167;
unsigned short var_21 = (unsigned short)56913;
unsigned int var_22 = 3047636781U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
