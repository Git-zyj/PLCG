#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1163372816U;
unsigned long long int var_5 = 4610095928580880682ULL;
unsigned char var_6 = (unsigned char)125;
int var_10 = 737007885;
unsigned int var_13 = 156095266U;
int zero = 0;
unsigned long long int var_16 = 16099998168072314241ULL;
unsigned int var_17 = 3662972559U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
